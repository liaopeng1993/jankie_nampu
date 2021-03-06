#ifndef __NMP_MOD_IVS_MESSAGES_EXTERNAL_H__
#define __NMP_MOD_IVS_MESSAGES_EXTERNAL_H__

#include "nmp_msg_share.h"
#include "nmp_list_head.h"


typedef struct _NmpIvsRegister NmpIvsRegister;
struct _NmpIvsRegister
{
    gchar ivs_id[IVS_ID_LEN];
    gchar  ivs_version[VERSION_LEN];
};

typedef struct _NmpIvsRegisterRes NmpIvsRegisterRes;
struct _NmpIvsRegisterRes
{
    NmpMsgErrCode       code;
    gchar                    domain_id[DOMAIN_ID_LEN];
    gint                       keep_alive_time;
    gint                       storage_type;
    gint                       mode;
    gchar			server_time[TIME_INFO_LEN];
    gchar              ivs_name[IVS_NAME_LEN];
};

typedef struct _NmpIvsHeart NmpIvsHeart;
struct _NmpIvsHeart
{
    gchar		ivs_id[IVS_ID_LEN];
};

typedef struct _NmpIvsHeartRes NmpIvsHeartRes;
struct _NmpIvsHeartRes
{
    NmpMsgErrCode	code;
    gchar			server_time[TIME_INFO_LEN];
};


#endif //__NMP_MOD_IVS_MESSAGES_EXTERNAL_H__



