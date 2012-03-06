// -*- C++ -*-
// Copyright 2012, Evan Klitzke <evan@eklitzke.org>
//
// This is the header file for the C++ representation of the "core" JavaScript
// code. This exists so that we can have a safe representation of the core code,
// and ship a working binary without any extra files.
//
// This file is AUTOGENERATED by gen_bundled_core.py, do not edit by hand!

#ifndef SRC_BUNDLED_CORE_H_
#define SRC_BUNDLED_CORE_H_

#include <v8.h>

namespace e {
v8::Local<v8::Script> GetCoreScript();
}
#endif  // SRC_BUNDLED_CORE_H_