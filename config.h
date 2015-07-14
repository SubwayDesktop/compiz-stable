/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Decorator interface version */
#define DECOR_INTERFACE_VERSION 20080529

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Gettext package. */
#define GETTEXT_PACKAGE "compiz"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if libwnck version >= 2_18_1 */
#define HAVE_LIBWNCK_2_18_1 1

/* Define to 1 if libwnck version >= 2_19_4 */
#define HAVE_LIBWNCK_2_19_4 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if metacity version >= 2.15.21 */
#define HAVE_METACITY_2_15_21 1

/* Define to 1 if metacity version >= 2.17.0 */
#define HAVE_METACITY_2_17_0 1

/* Define to 1 if metacity version >= 2.23.2 */
#define HAVE_METACITY_2_23_2 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `wnck_window_has_name' function. */
#define HAVE_WNCK_WINDOW_HAS_NAME 1

/* Define to 1 if xrender version >= 0.9.3 */
#define HAVE_XRENDER_0_9_3 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Max reasonable desktops */
#define MAX_DESKTOPS 36

/* Name of package */
#define PACKAGE "compiz"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "davidr@novell.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "compiz"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "compiz 0.8.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "compiz"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.8.6"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Build annotate plugin */
#define USE_ANNOTATE 1

/* Build dbus plugin */
#define USE_DBUS 1

/* Build dbus glib support */
#define USE_DBUS_GLIB 1

/* Build fuse plugin */
#define USE_FUSE 1

/* Build gconf plugin */
#define USE_GCONF 1

/* Build glib plugin */
#define USE_GLIB 1

/* Build gnome settings module */
/* #undef USE_GNOME */

/* Install custom keybindings */
/* #undef USE_GNOME_KEYBINDINGS */

/* Build gtk window decorator */
#define USE_GTK 1

/* Build inotify plugin */
#define USE_INOTIFY 1

/* Build kconfig plugin */
/* #undef USE_KCONFIG */

/* Build kde window decorator */
/* #undef USE_KDE */

/* Build kde4 window decorator */
/* #undef USE_KDE4 */

/* librsvg for SVG support */
#define USE_LIBRSVG 1

/* Build metacity theme support */
#define USE_METACITY 1

/* Version number of package */
#define VERSION "0.8.6"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
