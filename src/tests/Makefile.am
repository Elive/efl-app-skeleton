
if EFL_HAVE_TESTS

check_PROGRAMS = skeleton_tests

skeleton_tests_SOURCES = test_skeleton.c
skeleton_tests_CPPFLAGS = -I$(top_builddir)/src/lib/ \
-DPACKAGE_TESTS_DIR=\"$(top_srcdir)/src/tests/\" \
-DPACKAGE_BUILD_DIR=\"`pwd`/$(top_builddir)/src/tests/\" \
@SKELETON_CFLAGS@ \
@CHECK_CFLAGS@
skeleton_tests_LDADD = @CHECK_LIBS@ $(top_builddir)/src/lib/libskeleton.la
skeleton_tests_DEPENDENCIES = $(top_builddir)/src/lib/libskeleton.la

endif

EXTRA_DIST = test_skeleton.c
