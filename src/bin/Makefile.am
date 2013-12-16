MAINTAINERCLEANFILES = Makefile.in

bin_PROGRAMS = skeleton

AM_CPPFLAGS = -DPACKAGE_DATA_DIR=\"$(datadir)/$(PACKAGE)\" \
-I$(top_builddir)/src/bin/ \
-I$(top_srcdir)/src/bin/ \
-I$(top_builddir)/src/lib/ \
-I$(top_srcdir)/src/lib/ \
@SKELETON_CFLAGS@

skeleton_SOURCES = skeleton_main.c
skeleton_LDADD = @SKELETON_LIBS@ $(top_builddir)/src/lib/libskeleton.la

localedir = $(datadir)/locale
DEFS = -DLOCALEDIR=\"$(localedir)\" @DEFS@

EXTRA_DIST = skeleton_private.h

