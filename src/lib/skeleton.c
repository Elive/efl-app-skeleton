#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "Skeleton.h"

#include "skeleton_private.h"

static int _skeleton_init = 0;
int _skeleton_lib_log_dom = -1;

EAPI int
skeleton_init(void)
{
   _skeleton_init++;
   if (_skeleton_init > 1) return _skeleton_init;

   eina_init();

   _skeleton_lib_log_dom = eina_log_domain_register("skeleton", EINA_COLOR_CYAN);
   if (_skeleton_lib_log_dom < 0)
     {
	EINA_LOG_ERR("Skeleton can not create its log domain.");
	goto shutdown_eina;
     }

   // Put here your initialization logic of your library

   eina_log_timing(_skeleton_lib_log_dom, EINA_LOG_STATE_STOP, EINA_LOG_STATE_INIT);

   return _skeleton_init;

 shutdown_eina:
   eina_shutdown();
   _skeleton_init--;

   return _skeleton_init;
}

EAPI int
skeleton_shutdown(void)
{
   _skeleton_init--;
   if (_skeleton_init != 0) return _skeleton_init;

   eina_log_timing(_skeleton_lib_log_dom,
		   EINA_LOG_STATE_START,
		   EINA_LOG_STATE_SHUTDOWN);

   // Put here your shutdown logic

   eina_log_domain_unregister(_skeleton_lib_log_dom);
   _skeleton_lib_log_dom = -1;

   eina_shutdown();

   return _skeleton_init;
}

EAPI void
skeleton_library_call(void)
{
   INF("Not really doing anything useful.");
}
