#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x86emu.h"

const char* alureName = "libalure.so.1";
#define LIBNAME alure

#define CUSTOM_INIT \
    setNeededLibs(&lib->priv.w, 1, "libopenal.so.1");

#include "wrappedlib_init.h"

