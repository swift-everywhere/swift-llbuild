#ifndef CONFIG_H
#define CONFIG_H

/* Exported configuration */
#include "llvm/Config/llvm-config.h"

#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif

/* Bug report URL. */
#define BUG_REPORT_URL "https://bugs.llvm.org/"

/* Define to 1 to enable backtraces, and to 0 otherwise. */
#define ENABLE_BACKTRACES 1

/* Define to 1 to enable crash overrides, and to 0 otherwise. */
#define ENABLE_CRASH_OVERRIDES 1

/* Define to 1 if you have the `backtrace' function. */
#if __has_include(<execinfo.h>) && !(defined(__ANDROID__) && __ANDROID_API__ < 33)
#define HAVE_BACKTRACE TRUE
#endif

#define BACKTRACE_HEADER <execinfo.h>

/* Define to 1 if you have the <CrashReporterClient.h> header file. */
/* #undef HAVE_CRASHREPORTERCLIENT_H */

/* can use __crashreporter_info__ */
#define HAVE_CRASHREPORTER_INFO 1

/* Define to 1 if you have the `arc4random' function. */
#if defined(__APPLE__)
#define HAVE_DECL_ARC4RANDOM 1
#else
/*#undef HAVE_DECL_ARC4RANDOM */
#endif

/* Define to 1 if you have the declaration of `FE_ALL_EXCEPT', and to 0 if you
   don't. */
#define HAVE_DECL_FE_ALL_EXCEPT 1

/* Define to 1 if you have the declaration of `FE_INEXACT', and to 0 if you
   don't. */
#define HAVE_DECL_FE_INEXACT 1

/* Define to 1 if you have the declaration of `strerror_s', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_S 0

/* Define to 1 if you have the DIA SDK installed, and to 0 if you don't. */
#define LLVM_ENABLE_DIA_SDK 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if dlopen() is available on this platform. */
#define HAVE_DLOPEN 1

/* Define if dladdr() is available on this platform. */
#define HAVE_DLADDR 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define if libffi is available on this platform. */
/* #undef HAVE_FFI_CALL */

/* Define to 1 if you have the <ffi/ffi.h> header file. */
/* #undef HAVE_FFI_FFI_H */

/* Define to 1 if you have the <ffi.h> header file. */
/* #undef HAVE_FFI_H */

/* Define to 1 if you have the `futimens' function. */
#if defined(__ANDROID__)
#define HAVE_FUTIMENS 1
#else
/* #undef HAVE_FUTIMENS */
#endif

/* Define to 1 if you have the `futimes' function. */
#define HAVE_FUTIMES 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Define to 1 if you have the `edit' library (-ledit). */
#define HAVE_LIBEDIT 1

/* Define to 1 if you have the `pfm' library (-lpfm). */
/* #undef HAVE_LIBPFM */

/* Define to 1 if you have the `psapi' library (-lpsapi). */
/* #undef HAVE_LIBPSAPI */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `pthread_getname_np' function. */
#if !defined(__ANDROID__)
#define HAVE_PTHREAD_GETNAME_NP 1
#endif

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <link.h> header file. */
/* #undef HAVE_LINK_H */

/* Define to 1 if you have the `lseek64' function. */
/* #undef HAVE_LSEEK64 */

/* Define to 1 if you have the `mallctl' function. */
#if defined(__FreeBSD__)
#define HAVE_MALLCTL 1
#else
/* #undef HAVE_MALLCTL */
#endif

/* Define to 1 if you have the `mallinfo' function. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the <mach/mach.h> header file. */
#if __has_include(<mach/mach.h>)
#define HAVE_MACH_MACH_H 1
#else
/* #undef HAVE_MACH_MACH_H */
#endif

/* Define if mallinfo() is available on this platform. */
#if __has_include(<mallinfo.h>)
#define HAVE_MALLINFO 1
#else
/* #undef HAVE_MALLINFO */
#endif

/* Define to 1 if you have the <malloc.h> header file. */
#if __has_include(<malloc.h>)
#define HAVE_MALLOC_H
#else
/* #undef HAVE_MALLOC_H */
#endif

/* Define to 1 if you have the <malloc/malloc.h> header file. */
#if __has_include(<malloc/malloc.h>)
#define HAVE_MALLOC_MALLOC_H
#else
/* #undef HAVE_MALLOC_MALLOC_H */
#endif

/* Define to 1 if you have the `malloc_zone_statistics' function. */
#define HAVE_MALLOC_ZONE_STATISTICS 1

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_spawn' function. */
#if !(defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE)
#define HAVE_POSIX_SPAWN 1
#endif

/* Define to 1 if you have the `pread' function. */
#if !defined(LLVM_ON_WIN32)
#define HAVE_PREAD 1
#endif

/* Define to 1 if you have the <pthread.h> header file. */
#if !defined(LLVM_ON_WIN32)
#define HAVE_PTHREAD_H 1
#endif

/* Have pthread_mutex_lock */
#if !defined(LLVM_ON_WIN32)
#define HAVE_PTHREAD_MUTEX_LOCK 1
#endif

/* Have pthread_getspecific */
#if !defined(LLVM_ON_WIN32)
#define HAVE_PTHREAD_GETSPECIFIC 1
#endif

/* Have pthread_rwlock_init */
#if !defined(LLVM_ON_WIN32)
#define HAVE_PTHREAD_RWLOCK_INIT 1
#endif

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `sbrk' function. */
/* This is hard-coded to be not present on FreeBSD arm64, because
   that platform has dropped support for this function. */
#if defined(__FreeBSD__) && defined(__aarch64__)
#undef HAVE_SBRK
#else
#define HAVE_SBRK 1
#endif

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `sched_getaffinity' function. */
/* #undef HAVE_SCHED_GETAFFINITY */

/* Define to 1 if you have the `CPU_COUNT' macro. */
/* #undef HAVE_CPU_COUNT */

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `sigaltstack' function. */
/* #undef HAVE_SIGALTSTACK */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#if !defined(LLVM_ON_WIN32)
#define HAVE_STRERROR_R 1
#endif

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if stat struct has st_mtimespec member .*/
#if defined(__APPLE__)
#define HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC 1
#else
#undef HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC
#endif

/* Define to 1 if stat struct has st_mtim member. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if the setupterm() function is supported this platform. */
#if (defined(__APPLE__) && TARGET_OS_IPHONE) || defined(__ANDROID__) || defined(LLBUILD_NO_TERMINFO)
#undef HAVE_TERMINFO
#else
#define HAVE_TERMINFO 1
#endif

/* Define if the xar_open() function is supported this platform. */
#define HAVE_LIBXAR 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#if !defined(LLVM_ON_WIN32)
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Have host's _alloca */
/* #undef HAVE__ALLOCA */

/* Define to 1 if you have the `_chsize_s' function. */
/* #undef HAVE__CHSIZE_S */

/* Define to 1 if you have the `_Unwind_Backtrace' function. */
#define HAVE__UNWIND_BACKTRACE 1

/* Have host's __alloca */
/* #undef HAVE___ALLOCA */

/* Have host's __ashldi3 */
/* #undef HAVE___ASHLDI3 */

/* Have host's __ashrdi3 */
/* #undef HAVE___ASHRDI3 */

/* Have host's __chkstk */
/* #undef HAVE___CHKSTK */

/* Have host's __chkstk_ms */
/* #undef HAVE___CHKSTK_MS */

/* Have host's __cmpdi2 */
/* #undef HAVE___CMPDI2 */

/* Have host's __divdi3 */
/* #undef HAVE___DIVDI3 */

/* Have host's __fixdfdi */
/* #undef HAVE___FIXDFDI */

/* Have host's __fixsfdi */
/* #undef HAVE___FIXSFDI */

/* Have host's __floatdidf */
/* #undef HAVE___FLOATDIDF */

/* Have host's __lshrdi3 */
/* #undef HAVE___LSHRDI3 */

/* Have host's __main */
/* #undef HAVE___MAIN */

/* Have host's __moddi3 */
/* #undef HAVE___MODDI3 */

/* Have host's __udivdi3 */
/* #undef HAVE___UDIVDI3 */

/* Have host's __umoddi3 */
/* #undef HAVE___UMODDI3 */

/* Have host's ___chkstk */
/* #undef HAVE____CHKSTK */

/* Have host's ___chkstk_ms */
/* #undef HAVE____CHKSTK_MS */

/* Linker version detected at compile time. */
/* #undef HOST_LINK_VERSION */

/* Target triple LLVM will generate code for by default */
/* Doesn't use `cmakedefine` because it is allowed to be empty. */
#define LLVM_DEFAULT_TARGET_TRIPLE ""

/* Define if zlib compression is available */
#define LLVM_ENABLE_ZLIB 1

/* Define if overriding target triple is enabled */
/* #undef LLVM_TARGET_TRIPLE_ENV */

/* LLVM version information */
/* #undef LLVM_VERSION_INFO */

/* Whether tools show host and target info when invoked with --version */
#define LLVM_VERSION_PRINTER_SHOW_HOST_TARGET_INFO 1

/* Define if libxml2 is supported on this platform. */
#define LLVM_LIBXML2_ENABLED 1

/* Define to the extension used for shared libraries, say, ".so". */
#define LTDL_SHLIB_EXT ".dylib"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://bugs.llvm.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "LLVM"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LLVM 7.0.0svn"

/* Define to the version of this package. */
#define PACKAGE_VERSION "7.0.0svn"

/* Define to the vendor of this package. */
/* #undef PACKAGE_VENDOR */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to a function implementing stricmp */
/* #undef stricmp */

/* Define to a function implementing strdup */
/* #undef strdup */

/* Whether GlobalISel rule coverage is being collected */
#define LLVM_GISEL_COV_ENABLED 0

/* Define to the default GlobalISel coverage file prefix */
/* #undef LLVM_GISEL_COV_PREFIX */

#endif
