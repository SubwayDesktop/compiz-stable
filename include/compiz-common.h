#ifndef COMPIZ_COMMON_H
#define COMPIZ_COMMON_H

#ifdef  __cplusplus
# define COMPIZ_BEGIN_DECLS  extern "C" {
# define COMPIZ_END_DECLS    }
#else
# define COMPIZ_BEGIN_DECLS
# define COMPIZ_END_DECLS
#endif

#define COMPIZ_VERSION_MAJOR 0
#define COMPIZ_VERSION_MINOR 8
#define COMPIZ_VERSION_MICRO 6

#define COMPIZ_VERSION_STRING "0.8.6"

#endif
