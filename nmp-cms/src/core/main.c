#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/resource.h>
#include <glib.h>
#include <assert.h>
#include <getopt.h>
#include "nmp_share_debug.h"
#include "nmp_share_signal.h"
#include "nmp_appcore.h"
#include "nmp_sysctl.h"
#include "nmp_args.h"
#include "nmp_tw_interface.h"

//:TODO .inc

extern void nmp_cms_pu_insert(void);
extern void nmp_cms_cu_insert(void);
extern void nmp_cms_bss_insert(void);
extern void nmp_cms_dbs_insert(void);
extern void nmp_cms_mds_insert(void);
extern void nmp_cms_mss_insert(void);
extern void nmp_cms_cascade_insert(void);
extern void nmp_cms_tw_insert(void);
extern void nmp_cms_ams_insert(void);
extern void nmp_cms_wdd_insert(void);
extern void nmp_cms_log_insert(void);
extern void nmp_init_xml_cmd(void);

extern gint nmp_set_system_time_zone(gchar *zone);


static __inline__ void
nmp_cms_setup_signals( void )
{
	nmp_sig_setup_signals();
}


static __inline__ void
nmp_cms_log_facility_init( void )
{//TODO: PATH
	nmp_debug_log_facility_init(
		nmp_get_sys_parm_str(SYS_PARM_LOGFILEPATH),
		"Nmp-cms.log"
	);
	nmp_tw_init_log_path(
		nmp_get_sys_parm_str(SYS_PARM_LOGFILEPATH),
		"Nmp-cms-tw.log"
	);
}


static __inline__ void
nmp_cms_open_core_facility( void )
{
	struct rlimit rli;

	rli.rlim_cur = RLIM_INFINITY;
	rli.rlim_max = RLIM_INFINITY;

	if (setrlimit(RLIMIT_CORE, &rli) < 0)
	{
		nmp_error("<main> set core resource limit error!");
		FATAL_ERROR_EXIT;
	}
}


static __inline__ void
nmp_cms_running_env_init( void )
{
#ifndef G_THREADS_ENABLED
	nmp_error("<main> CMS compiled without 'G_THREADS_ENABLED' defined!");
	FATAL_ERROR_EXIT;
#endif

    //	if (getenv("BYPASS_GLIB_POOLS") != NULL)
    g_slice_set_config(G_SLICE_CONFIG_ALWAYS_MALLOC, TRUE);
    g_thread_init(NULL);
    g_type_init();

    nmp_sysctl_init();
    nmp_set_system_time_zone(nmp_get_sys_parm_str(SYS_PARM_TIMEZONE));
    nmp_cms_log_facility_init();
    nmp_debug_set_log_size(nmp_get_sys_parm_int(SYS_PARM_LOGFILESIZE));
    nmp_cms_setup_signals();
/*    nmp_cms_open_core_facility(); */
}


static __inline__ void
nmp_cms_mods_init( void )
{
    nmp_cms_pu_insert();
    nmp_cms_cu_insert();
    nmp_cms_bss_insert();
    nmp_cms_dbs_insert();
    nmp_cms_mds_insert();
    nmp_cms_mss_insert();
//    nmp_cms_cascade_insert();
    nmp_cms_tw_insert();
    nmp_cms_ams_insert();
    nmp_cms_wdd_insert();
    nmp_cms_log_insert();
}


static __inline__ void
nmp_cms_lib_init( void )
{
    nmp_init_xml_cmd();
}


int main(int argc, char *argv[])
{
    GMainLoop *loop;

    nmp_process_main_args(argc, argv);
    nmp_cms_running_env_init();
    nmp_afx_core_init();
    nmp_cms_lib_init();
    nmp_cms_mods_init();
    loop = g_main_loop_new(NULL, FALSE);
    g_main_loop_run(loop);

	return 0;
}

//:~ End
