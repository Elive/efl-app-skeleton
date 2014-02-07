MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I$(top_srcdir)/src/lib \
-I$(top_builddir)/src/lib \
-DPACKAGE_LIB_DIR=\"$(libdir)\" \
-DPACKAGE_DATA_DIR=\"$(datadir)/$(PACKAGE)\" \
@EFL_CFLAGS@ \
-DEFL_EFL_BUILD

lib_LTLIBRARIES = libskeleton.la

includes_HEADERS = Skeleton.h
includesdir = $(includedir)/skeleton-@VMAJ@

libskeleton_la_SOURCES = skeleton.c
libskeleton_la_LIBADD = @EFL_LIBS@ -lm
libskeleton_la_LDFLAGS = @EFL_LTLIBRARY_FLAGS@
