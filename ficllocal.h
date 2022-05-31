/*
**	ficllocal.h
**
** Put all local settings here.  This file will always ship empty.
**
*/

#ifndef FICL_ROBUST
#define FICL_ROBUST                     (0)
#endif
#define FICL_WANT_EXTENDED_PREFIX       (1)
#define FICL_DEFAULT_DICTIONARY_SIZE    (32768)
#define FICL_USER_CELLS                 (64)
#define FICL_WANT_MULTITHREADED		    (1)
#define FICL_HASH_SIZE                  (1009)

#ifdef darwin
#define FICL_OS   1
#else
# ifdef linux
#  define FICL_OS   2
# else
#  ifdef WIN32
#   define FICL_OS   3
#  else
#   error Unknown operating system
#  endif
# endif
#endif


