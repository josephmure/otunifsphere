
#ifndef OTUNIFSPHERE_PRIVATE_HXX
#define OTUNIFSPHERE_PRIVATE_HXX

/* From http://gcc.gnu.org/wiki/Visibility */
/* Generic helper definitions for shared library support */
#if defined _WIN32 || defined __CYGWIN__
#define OTUNIFSPHERE_HELPER_DLL_IMPORT __declspec(dllimport)
#define OTUNIFSPHERE_HELPER_DLL_EXPORT __declspec(dllexport)
#define OTUNIFSPHERE_HELPER_DLL_LOCAL
#else
#if __GNUC__ >= 4
#define OTUNIFSPHERE_HELPER_DLL_IMPORT __attribute__ ((visibility ("default")))
#define OTUNIFSPHERE_HELPER_DLL_EXPORT __attribute__ ((visibility ("default")))
#define OTUNIFSPHERE_HELPER_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
#else
#define OTUNIFSPHERE_HELPER_DLL_IMPORT
#define OTUNIFSPHERE_HELPER_DLL_EXPORT
#define OTUNIFSPHERE_HELPER_DLL_LOCAL
#endif
#endif

/* Now we use the generic helper definitions above to define OTUNIFSPHERE_API and OTUNIFSPHERE_LOCAL.
 * OTUNIFSPHERE_API is used for the public API symbols. It either DLL imports or DLL exports (or does nothing for static build)
 * OTUNIFSPHERE_LOCAL is used for non-api symbols. */

#ifndef OTUNIFSPHERE_STATIC /* defined if OT is compiled as a DLL */
#ifdef OTUNIFSPHERE_DLL_EXPORTS /* defined if we are building the OT DLL (instead of using it) */
#define OTUNIFSPHERE_API OTUNIFSPHERE_HELPER_DLL_EXPORT
#else
#define OTUNIFSPHERE_API OTUNIFSPHERE_HELPER_DLL_IMPORT
#endif /* OTUNIFSPHERE_DLL_EXPORTS */
#define OTUNIFSPHERE_LOCAL OTUNIFSPHERE_HELPER_DLL_LOCAL
#else /* OTUNIFSPHERE_STATIC is defined: this means OT is a static lib. */
#define OTUNIFSPHERE_API
#define OTUNIFSPHERE_LOCAL
#endif /* !OTUNIFSPHERE_STATIC */


#endif // OTUNIFSPHERE_PRIVATE_HXX

