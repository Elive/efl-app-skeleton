#ifndef SKELETON_PRIVATE_H
# define SKELETON_PRIVATE_H

extern int _skeleton_lib_log_dom;

#ifdef ERR
# undef ERR
#endif
#define ERR(...) EINA_LOG_DOM_ERR(_skeleton_lib_log_dom, __VA_ARGS__)
#ifdef INF
# undef INF
#endif
#define INF(...) EINA_LOG_DOM_INFO(_skeleton_lib_log_dom, __VA_ARGS__)
#ifdef WRN
# undef WRN
#endif
#define WRN(...) EINA_LOG_DOM_WARN(_skeleton_lib_log_dom, __VA_ARGS__)
#ifdef CRIT
# undef CRIT
#endif
#define CRIT(...) EINA_LOG_DOM_CRIT(_skeleton_lib_log_dom, __VA_ARGS__)
#ifdef DBG
# undef DBG
#endif
#define DBG(...) EINA_LOG_DOM_DBG(_skeleton_lib_log_dom, __VA_ARGS__)

#endif
