#include <rtspwatch.h>
#include "nmp_config.h"
#include "nmp_sock_info.h"
#include "nmp_smart_buffer.h"

#ifdef CONFIG_RTCP_SUPPORT
#include "nmp_rtcp_control.h"
#endif

#ifndef __NMP_MEDIA_SOURCE_H__
#define __NMP_MEDIA_SOURCE_H__

#define N_STREAMS			2

#ifdef CONFIG_MEDIA_SRC_USE_BLOCKABLE_IO
#define MAX_BLOCK_IO_SIZE		(128*1024)
#endif

G_BEGIN_DECLS


typedef gint (*NmpMediaRecvFunc)(gpointer media, gint stream, gchar *buf, gint size);

typedef struct _NmpMediaSource NmpMediaSource;
typedef struct _NmpMediaSourceFuncs NmpMediaSourceFuncs;
struct _NmpMediaSourceFuncs
{
	gint (*recv)(NmpMediaSource *source);
	void (*error)(NmpMediaSource *source);
};


typedef struct _NmpStreamSource NmpStreamSource;
struct _NmpStreamSource
{
	NmpMediaSocket		sock_info;			/* stream socket infomation, including rtp/rtcp */

	GPollFD				rtp_read;			/* for rtp recving */
	gboolean			gpfd_added;			/* &rtp_read already added to source */

	NmpSmartBuffer		rtp_buffer;			/* for rtp packet buffering */
	gboolean			rtp_connected;		/* tcp connected? */
	gboolean			rtp_said_bye;		/* already bye ? */

#ifdef CONFIG_MEDIA_SRC_USE_BLOCKABLE_IO
	gchar				*data_block;		/* for tcp data buffering */
	gsize				data_offset;
	gsize				data_size;
	gsize				block_capacity;
#endif

#ifdef CONFIG_RTCP_SUPPORT
	NmpRtcpControl		rtcp_control;		/* rtcp control block */
	gboolean			rtcp_fd_added;		/* added to source */
	gboolean			rtcp_connected;		/* tcp connected? */
#endif
};


struct _NmpMediaSource
{
	GSource				parent_object;		/* GSource parent object */
	NmpStreamSource		streams[N_STREAMS];	/* stream source */

	gint				n_streams;			/* media streams count */
	NmpMediaSourceFuncs *funcs;				/* operations */

	gint64				last_check;			/* for timeout */
	gint				err_code;			/* error code */

	gint				blockable;			/* reliable data link, might sleep */
	gint				blocking;			/* is blocking */

	gpointer			media;				/* point back to media object */
	NmpMediaRecvFunc	func_recv;			/* media receiving function registered */
	gpointer			user_data;
};


NmpMediaSource *nmp_media_src_create_source(gpointer media, gint streams,
	NmpMediaTrans transport, gint blockable);

void nmp_media_src_attach(NmpMediaSource *source);

gint nmp_media_src_get_rtp_port(NmpMediaSource *source, gint stream, gint *rtp);

#ifdef CONFIG_RTCP_SUPPORT
gint nmp_media_src_get_rtcp_port(NmpMediaSource *source, gint stream, gint *rtcp);
#endif

void nmp_media_src_set_recv_fun(NmpMediaSource *source,
	NmpMediaRecvFunc function);

G_END_DECLS

#endif /* __NMP_MEDIA_SOURCE_H__ */
