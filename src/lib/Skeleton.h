#ifndef SKELETON_H_
# define SKELETON_H_

#include <Elementary.h>

#ifdef EAPI
# undef EAPI
#endif

#ifdef _WIN32
# ifdef EFL_SKELETON_BUILD
#  ifdef DLL_EXPORT
#   define EAPI __declspec(dllexport)
#  else
#   define EAPI
#  endif /* ! DLL_EXPORT */
# else
#  define EAPI __declspec(dllimport)
# endif /* ! EFL_SKELETON_BUILD */
#else
# ifdef __GNUC__
#  if __GNUC__ >= 4
#   define EAPI __attribute__ ((visibility("default")))
#  else
#   define EAPI
#  endif
# else
#  define EAPI
# endif
#endif /* ! _WIN32 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file
 * @brief These routines are used for Skeleton library interaction.
 */

/**
 * @brief Init / shutdown functions.
 * @defgroup Init  Init / Shutdown
 *
 * @{
 *
 * Functions of obligatory usage, handling proper initialization
 * and shutdown routines.
 *
 * Before the usage of any other function, Skeleton should be properly
 * initialized with @ref skeleton_init() and the last call to Skeleton's
 * functions should be @ref skeleton_shutdown(), so everything will
 * be correctly freed.
 *
 * Skeleton logs everything with Eina Log, using the "skeleton" log domain.
 *
 */

/**
 * Initialize Skeleton.
 *
 * Initializes Skeleton, its dependencies and modules. Should be the first
 * function of Skeleton to be called.
 *
 * @return The init counter value.
 *
 * @see skeleton_shutdown().
 *
 * @ingroup Init
 */
EAPI int skeleton_init(void);

/**
 * Shutdown Skeleton
 *
 * Shutdown Skeleton. If init count reaches 0, all the internal structures will
 * be freed. Any Skeleton library call after this point will leads to an error.
 *
 * @return Skeleton's init counter value.
 *
 * @see skeleton_init().
 *
 * @ingroup Init
 */
EAPI int skeleton_shutdown(void);

/**
 * @}
 */

/**
 * @brief Main group API that wont do anything
 * @defgroup Main Main
 *
 * @{
 *
 * @brief A function that doesn't do any good nor any bad
 *
 * @ingroup Main
 */
EAPI void skeleton_library_call(void);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* SKELETON_H_ */
