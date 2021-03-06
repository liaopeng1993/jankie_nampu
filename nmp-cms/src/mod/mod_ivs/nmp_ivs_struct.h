#ifndef __NMP_IVS_STRUCT_H__
#define __NMP_IVS_STRUCT_H__

#include "nmp_mods.h"

typedef enum
{
	STAT_IVS_REGISTERING,
	STAT_IVS_ONLINE,
	STAT_IVS_OFFLINE
}NmpIvsState;

typedef struct _NmpIvs NmpIvs;
struct _NmpIvs
{
	NmpGuestBase	guest_base;

	NmpIvsState 	ivs_state;
	gint            ttl;      /*time to live*/
	gint            hb_freq;  /*keep alive frequency(sec)*/
};


#endif	//__NMP_IVS_STRUCT_H__
