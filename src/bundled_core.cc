// -*- C++ -*-
// Copyright 2012, Evan Klitzke <evan@eklitzke.org>
//
// This file is AUTOGENERATED by gen_bundled_core.py, do not edit by hand!

#include <v8.h>

namespace e {
// This is the "minified" core.js code, as a C string. The reason for
// obfuscating it like this is simply to avoid having to escape the string in a
// way that's safe for C. Python's built in "string_escape" codec comes close
// but doesn't quite grok C.
static const char *core_src = (
  "\x2f\x2f\x20\x43\x6f\x70\x79\x72\x69\x67\x68\x74\x20\x32\x30\x31\x32\x2c"
  "\x20\x45\x76\x61\x6e\x20\x4b\x6c\x69\x74\x7a\x6b\x65\x20\x3c\x65\x76\x61"
  "\x6e\x40\x65\x6b\x6c\x69\x74\x7a\x6b\x65\x2e\x6f\x72\x67\x3e\x0a\x63\x6f"
  "\x72\x65\x3d\x7b\x63\x6f\x6c\x75\x6d\x6e\x3a\x30\x2c\x6c\x69\x6e\x65\x3a"
  "\x30\x2c\x77\x69\x6e\x64\x6f\x77\x54\x6f\x70\x3a\x30\x7d\x3b\x6c\x6f\x67"
  "\x28\x22\x65\x6e\x74\x65\x72\x65\x64\x20\x63\x6f\x72\x65\x2e\x6a\x73\x22"
  "\x29\x3b\x63\x6f\x72\x65\x2e\x63\x75\x72\x72\x65\x6e\x74\x4c\x69\x6e\x65"
  "\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x72\x65\x74\x75\x72\x6e"
  "\x20\x77\x6f\x72\x6c\x64\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x4c"
  "\x69\x6e\x65\x28\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x29\x7d\x3b\x63\x6f"
  "\x72\x65\x2e\x74\x6f\x42\x6f\x6f\x6c\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x28\x61\x2c\x62\x29\x7b\x76\x6f\x69\x64\x20\x30\x3d\x3d\x3d\x61\x26\x26"
  "\x28\x61\x3d\x62\x29\x3b\x72\x65\x74\x75\x72\x6e\x21\x21\x61\x7d\x3b\x63"
  "\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x41\x62\x73\x6f\x6c\x75\x74\x65\x3d\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x28\x61\x2c\x62\x29\x7b\x63\x6f\x72\x65\x2e"
  "\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x6d\x6f\x76"
  "\x65\x28\x61\x2c\x62\x29\x3b\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73"
  "\x63\x72\x2e\x6d\x6f\x76\x65\x28\x61\x2b\x31\x2c\x62\x29\x7d\x3b\x0a\x63"
  "\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28"
  "\x61\x2c\x62\x2c\x64\x29\x7b\x61\x3d\x70\x61\x72\x73\x65\x49\x6e\x74\x28"
  "\x61\x7c\x7c\x30\x29\x3b\x62\x3d\x70\x61\x72\x73\x65\x49\x6e\x74\x28\x62"
  "\x7c\x7c\x30\x29\x3b\x63\x6f\x72\x65\x2e\x74\x6f\x42\x6f\x6f\x6c\x28\x64"
  "\x2c\x21\x30\x29\x3b\x76\x61\x72\x20\x64\x3d\x63\x6f\x72\x65\x2e\x77\x69"
  "\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x63\x75"
  "\x72\x78\x28\x29\x2c\x65\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77"
  "\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x63\x75\x72\x79\x28\x29"
  "\x2c\x63\x3d\x64\x2c\x66\x3d\x65\x3b\x61\x26\x26\x28\x66\x3d\x65\x2b\x61"
  "\x2c\x61\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75"
  "\x66\x66\x65\x72\x2e\x67\x65\x74\x6d\x61\x78\x79\x28\x29\x2c\x30\x3e\x66"
  "\x3f\x66\x3d\x30\x3a\x66\x3e\x61\x26\x26\x28\x66\x3d\x61\x29\x2c\x66\x21"
  "\x3d\x65\x26\x26\x28\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x2b\x3d\x66\x2d"
  "\x65\x29\x29\x3b\x62\x26\x26\x28\x63\x3d\x64\x2b\x62\x2c\x62\x3d\x63\x6f"
  "\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e"
  "\x67\x65\x74\x6d\x61\x78\x78\x28\x29\x2c\x30\x3e\x63\x3f\x63\x3d\x30\x3a"
  "\x63\x3e\x62\x26\x26\x28\x63\x3d\x62\x29\x2c\x63\x21\x3d\x64\x26\x26\x28"
  "\x63\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x2b\x3d\x63\x2d\x64\x29\x29"
  "\x3b\x28\x63\x21\x3d\x64\x7c\x7c\x66\x21\x3d\x65\x29\x26\x26\x63\x6f\x72"
  "\x65\x2e\x6d\x6f\x76\x65\x41\x62\x73\x6f\x6c\x75\x74\x65\x28\x66\x2c\x63"
  "\x29\x7d\x3b\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x61\x62\x73\x6f\x6c"
  "\x75\x74\x65\x3d\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x41\x62\x73\x6f\x6c"
  "\x75\x74\x65\x3b\x0a\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x6c\x65\x66"
  "\x74\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x61\x29\x7b\x76\x61\x72\x20"
  "\x61\x3d\x63\x6f\x72\x65\x2e\x74\x6f\x42\x6f\x6f\x6c\x28\x61\x2c\x21\x30"
  "\x29\x2c\x62\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62"
  "\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x63\x75\x72\x79\x28\x29\x3b\x63\x6f"
  "\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x61\x62\x73\x6f\x6c\x75\x74\x65\x28\x62"
  "\x2c\x30\x29\x3b\x21\x30\x3d\x3d\x3d\x61\x26\x26\x28\x63\x6f\x72\x65\x2e"
  "\x63\x6f\x6c\x75\x6d\x6e\x3d\x30\x29\x7d\x3b\x63\x6f\x72\x65\x2e\x6d\x6f"
  "\x76\x65\x2e\x72\x69\x67\x68\x74\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28"
  "\x61\x2c\x62\x29\x7b\x76\x61\x72\x20\x62\x3d\x63\x6f\x72\x65\x2e\x74\x6f"
  "\x42\x6f\x6f\x6c\x28\x62\x2c\x21\x30\x29\x2c\x64\x3d\x63\x6f\x72\x65\x2e"
  "\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74"
  "\x63\x75\x72\x79\x28\x29\x2c\x65\x3b\x65\x3d\x63\x6f\x72\x65\x2e\x77\x69"
  "\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x6d\x61"
  "\x78\x78\x28\x29\x3b\x69\x66\x28\x21\x61\x29\x7b\x76\x61\x72\x20\x63\x3d"
  "\x63\x6f\x72\x65\x2e\x63\x75\x72\x72\x65\x6e\x74\x4c\x69\x6e\x65\x28\x29"
  "\x2e\x6c\x65\x6e\x67\x74\x68\x3b\x65\x3d\x63\x3c\x65\x3f\x63\x3a\x65\x7d"
  "\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x61\x62\x73\x6f\x6c\x75\x74\x65"
  "\x28\x64\x2c\x65\x29\x3b\x21\x30\x3d\x3d\x3d\x62\x26\x26\x28\x63\x6f\x72"
  "\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x3d\x65\x29\x7d\x3b\x0a\x63\x6f\x72\x65"
  "\x2e\x64\x72\x61\x77\x54\x61\x62\x42\x61\x72\x3d\x66\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x28\x29\x7b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e"
  "\x74\x61\x62\x2e\x73\x74\x61\x6e\x64\x65\x6e\x64\x28\x29\x3b\x63\x6f\x72"
  "\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x61\x74\x74\x72"
  "\x6f\x6e\x28\x63\x75\x72\x73\x65\x73\x2e\x41\x5f\x42\x4f\x4c\x44\x29\x3b"
  "\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x61"
  "\x64\x64\x73\x74\x72\x28\x22\x20\x22\x2b\x77\x6f\x72\x6c\x64\x2e\x62\x75"
  "\x66\x66\x65\x72\x2e\x67\x65\x74\x4e\x61\x6d\x65\x28\x29\x2b\x22\x20\x22"
  "\x29\x3b\x66\x6f\x72\x28\x76\x61\x72\x20\x61\x3d\x22\x22\x2c\x62\x3d\x63"
  "\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x67\x65"
  "\x74\x6d\x61\x78\x78\x28\x29\x2c\x64\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e"
  "\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x67\x65\x74\x63\x75\x72\x78\x28\x29"
  "\x3b\x61\x2e\x6c\x65\x6e\x67\x74\x68\x3c\x62\x2d\x64\x2d\x31\x3b\x29\x61"
  "\x2b\x3d\x22\x20\x22\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73"
  "\x2e\x74\x61\x62\x2e\x73\x74\x61\x6e\x64\x6f\x75\x74\x28\x29\x3b\x63\x6f"
  "\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x61\x64\x64"
  "\x73\x74\x72\x28\x61\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77"
  "\x73\x2e\x74\x61\x62\x2e\x73\x74\x61\x6e\x64\x65\x6e\x64\x28\x29\x3b\x63"
  "\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x61\x74"
  "\x74\x72\x6f\x6e\x28\x63\x75\x72\x73\x65\x73\x2e\x41\x5f\x42\x4f\x4c\x44"
  "\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62"
  "\x2e\x61\x74\x74\x72\x6f\x6e\x28\x63\x75\x72\x73\x65\x73\x2e\x41\x5f\x55"
  "\x4e\x44\x45\x52\x4c\x49\x4e\x45\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e"
  "\x64\x6f\x77\x73\x2e\x74\x61\x62\x2e\x61\x64\x64\x73\x74\x72\x28\x22\x58"
  "\x22\x29\x7d\x3b\x0a\x63\x6f\x72\x65\x2e\x64\x72\x61\x77\x53\x74\x61\x74"
  "\x75\x73\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x63\x6f\x72\x65"
  "\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x73\x74\x61\x74\x75\x73\x2e\x73\x74"
  "\x61\x6e\x64\x6f\x75\x74\x28\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64"
  "\x6f\x77\x73\x2e\x73\x74\x61\x74\x75\x73\x2e\x6d\x76\x61\x64\x64\x73\x74"
  "\x72\x28\x30\x2c\x30\x2c\x22\x20\x20\x22\x29\x3b\x63\x6f\x72\x65\x2e\x77"
  "\x69\x6e\x64\x6f\x77\x73\x2e\x73\x74\x61\x74\x75\x73\x2e\x61\x64\x64\x73"
  "\x74\x72\x28\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x2b\x22\x2c\x22\x2b\x63"
  "\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x29\x3b\x66\x6f\x72\x28\x76\x61"
  "\x72\x20\x61\x3d\x22\x22\x2c\x62\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64"
  "\x6f\x77\x73\x2e\x73\x74\x61\x74\x75\x73\x2e\x67\x65\x74\x63\x75\x72\x78"
  "\x28\x29\x2c\x64\x3d\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e"
  "\x73\x74\x61\x74\x75\x73\x2e\x67\x65\x74\x6d\x61\x78\x78\x28\x29\x3b\x61"
  "\x2e\x6c\x65\x6e\x67\x74\x68\x3c\x64\x2d\x62\x3b\x29\x61\x2b\x3d\x22\x20"
  "\x22\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x73\x74\x61"
  "\x74\x75\x73\x2e\x61\x64\x64\x73\x74\x72\x28\x61\x29\x3b\x63\x6f\x72\x65"
  "\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x73\x74\x61\x74\x75\x73\x2e\x73\x74"
  "\x61\x6e\x64\x65\x6e\x64\x28\x29\x3b\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65"
  "\x41\x62\x73\x6f\x6c\x75\x74\x65\x28\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64"
  "\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x63\x75\x72\x79"
  "\x28\x29\x2c\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75"
  "\x66\x66\x65\x72\x2e\x67\x65\x74\x63\x75\x72\x78\x28\x29\x29\x7d\x3b\x0a"
  "\x63\x6f\x72\x65\x2e\x75\x70\x64\x61\x74\x65\x41\x6c\x6c\x57\x69\x6e\x64"
  "\x6f\x77\x73\x3d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x66\x6f\x72"
  "\x28\x76\x61\x72\x20\x61\x20\x69\x6e\x20\x63\x6f\x72\x65\x2e\x77\x69\x6e"
  "\x64\x6f\x77\x73\x29\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e"
  "\x68\x61\x73\x4f\x77\x6e\x50\x72\x6f\x70\x65\x72\x74\x79\x28\x61\x29\x26"
  "\x26\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x5b\x61\x5d\x2e\x6e"
  "\x6f\x75\x74\x72\x65\x66\x72\x65\x73\x68\x26\x26\x63\x6f\x72\x65\x2e\x77"
  "\x69\x6e\x64\x6f\x77\x73\x5b\x61\x5d\x2e\x6e\x6f\x75\x74\x72\x65\x66\x72"
  "\x65\x73\x68\x28\x29\x3b\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63"
  "\x72\x2e\x6e\x6f\x75\x74\x72\x65\x66\x72\x65\x73\x68\x28\x29\x3b\x63\x75"
  "\x72\x73\x65\x73\x2e\x64\x6f\x75\x70\x64\x61\x74\x65\x28\x29\x7d\x3b\x63"
  "\x6f\x72\x65\x2e\x73\x63\x72\x6f\x6c\x6c\x54\x6f\x3d\x66\x75\x6e\x63\x74"
  "\x69\x6f\x6e\x28\x61\x29\x7b\x76\x6f\x69\x64\x20\x30\x3d\x3d\x3d\x61\x26"
  "\x26\x28\x61\x3d\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x29\x3b\x63\x75\x72"
  "\x73\x65\x73\x2e\x6d\x6f\x76\x65\x28\x31\x2b\x61\x2c\x63\x6f\x72\x65\x2e"
  "\x72\x69\x67\x68\x74\x6d\x6f\x73\x74\x28\x29\x29\x7d\x3b\x0a\x77\x6f\x72"
  "\x6c\x64\x2e\x61\x64\x64\x45\x76\x65\x6e\x74\x4c\x69\x73\x74\x65\x6e\x65"
  "\x72\x28\x22\x6c\x6f\x61\x64\x22\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28"
  "\x29\x7b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x3d\x7b\x7d\x3b"
  "\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x74\x61\x62\x3d\x63"
  "\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e\x73\x75\x62\x77\x69"
  "\x6e\x28\x31\x2c\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e"
  "\x67\x65\x74\x6d\x61\x78\x78\x28\x29\x2c\x30\x2c\x30\x29\x3b\x63\x6f\x72"
  "\x65\x2e\x64\x72\x61\x77\x54\x61\x62\x42\x61\x72\x28\x29\x3b\x63\x6f\x72"
  "\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x3d\x63"
  "\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e\x73\x75\x62\x77\x69"
  "\x6e\x28\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e\x67\x65"
  "\x74\x6d\x61\x78\x79\x28\x29\x2d\x33\x2c\x63\x75\x72\x73\x65\x73\x2e\x73"
  "\x74\x64\x73\x63\x72\x2e\x67\x65\x74\x6d\x61\x78\x78\x28\x29\x2c\x31\x2c"
  "\x30\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75"
  "\x66\x66\x65\x72\x2e\x73\x63\x72\x6f\x6c\x6c\x6f\x6b\x28\x21\x30\x29\x3b"
  "\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x73\x74\x61\x74\x75"
  "\x73\x3d\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e\x73\x75"
  "\x62\x77\x69\x6e\x28\x32\x2c\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73"
  "\x63\x72\x2e\x67\x65\x74\x6d\x61\x78\x78\x28\x29\x2c\x63\x75\x72\x73\x65"
  "\x73\x2e\x73\x74\x64\x73\x63\x72\x2e\x67\x65\x74\x6d\x61\x78\x79\x28\x29"
  "\x2d\x32\x2c\x30\x29\x3b\x63\x6f\x72\x65\x2e\x64\x72\x61\x77\x53\x74\x61"
  "\x74\x75\x73\x28\x29\x3b\x66\x6f\x72\x28\x76\x61\x72\x20\x61\x3d\x63\x6f"
  "\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e"
  "\x67\x65\x74\x6d\x61\x78\x79\x28\x29\x2c\x62\x3d\x31\x3b\x62\x3c\x61\x3b"
  "\x62\x2b\x2b\x29\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62"
  "\x75\x66\x66\x65\x72\x2e\x6d\x76\x61\x64\x64\x73\x74\x72\x28\x62\x2c\x30"
  "\x2c\x22\x7e\x22\x29\x3b\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x41\x62\x73"
  "\x6f\x6c\x75\x74\x65\x28\x30\x2c\x30\x29\x3b\x63\x6f\x72\x65\x2e\x75\x70"
  "\x64\x61\x74\x65\x41\x6c\x6c\x57\x69\x6e\x64\x6f\x77\x73\x28\x29\x7d\x29"
  "\x3b\x0a\x77\x6f\x72\x6c\x64\x2e\x61\x64\x64\x45\x76\x65\x6e\x74\x4c\x69"
  "\x73\x74\x65\x6e\x65\x72\x28\x22\x6b\x65\x79\x70\x72\x65\x73\x73\x22\x2c"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x61\x29\x7b\x76\x61\x72\x20\x62\x3d"
  "\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65"
  "\x72\x2e\x67\x65\x74\x63\x75\x72\x78\x28\x29\x2c\x64\x3d\x63\x6f\x72\x65"
  "\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65"
  "\x74\x63\x75\x72\x79\x28\x29\x2c\x65\x3d\x61\x2e\x67\x65\x74\x43\x6f\x64"
  "\x65\x28\x29\x2c\x63\x3d\x61\x2e\x67\x65\x74\x4e\x61\x6d\x65\x28\x29\x3b"
  "\x69\x66\x28\x61\x2e\x69\x73\x41\x53\x43\x49\x49\x28\x29\x29\x73\x77\x69"
  "\x74\x63\x68\x28\x65\x29\x7b\x63\x61\x73\x65\x20\x31\x3a\x63\x6f\x72\x65"
  "\x2e\x6d\x6f\x76\x65\x2e\x6c\x65\x66\x74\x28\x29\x3b\x62\x72\x65\x61\x6b"
  "\x3b\x63\x61\x73\x65\x20\x33\x3a\x77\x6f\x72\x6c\x64\x2e\x73\x74\x6f\x70"
  "\x4c\x6f\x6f\x70\x28\x29\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20"
  "\x35\x3a\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x72\x69\x67\x68\x74\x28"
  "\x29\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x31\x32\x3a\x63\x75"
  "\x72\x73\x65\x73\x2e\x72\x65\x64\x72\x61\x77\x77\x69\x6e\x28\x29\x3b\x62"
  "\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x31\x33\x3a\x62\x3d\x63\x6f\x72"
  "\x65\x2e\x63\x75\x72\x72\x65\x6e\x74\x4c\x69\x6e\x65\x28\x29\x3b\x63\x3d"
  "\x22\x22\x3b\x63\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x3c\x62\x2e\x6c"
  "\x65\x6e\x67\x74\x68\x26\x26\x28\x63\x3d\x62\x2e\x63\x68\x6f\x70\x28\x63"
  "\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x29\x29\x3b\x77\x6f\x72\x6c\x64"
  "\x2e\x62\x75\x66\x66\x65\x72\x2e\x61\x64\x64\x4c\x69\x6e\x65\x28\x63\x6f"
  "\x72\x65\x2e\x6c\x69\x6e\x65\x2c\x63\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69"
  "\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x63\x6c\x72\x74\x6f"
  "\x65\x6f\x6c\x28\x29\x3b\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x61\x62"
  "\x73\x6f\x6c\x75\x74\x65\x28\x64\x2b\x31\x2c\x30\x29\x3b\x63\x6f\x72\x65"
  "\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x73\x65"
  "\x74\x73\x63\x72\x72\x65\x67\x28\x64\x2b\x31\x2c\x63\x6f\x72\x65\x2e\x77"
  "\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x6d"
  "\x61\x78\x79\x28\x29\x2d\x0a\x31\x29\x3b\x63\x6f\x72\x65\x2e\x77\x69\x6e"
  "\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x73\x63\x72\x6c\x28\x2d"
  "\x31\x29\x3b\x63\x26\x26\x28\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77"
  "\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x61\x64\x64\x73\x74\x72\x28\x63\x29"
  "\x2c\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x6c\x65\x66\x74\x28\x29\x29"
  "\x3b\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x2b\x2b\x3b\x63\x6f\x72\x65\x2e"
  "\x63\x6f\x6c\x75\x6d\x6e\x3d\x30\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73"
  "\x65\x20\x32\x36\x3a\x73\x79\x73\x2e\x6b\x69\x6c\x6c\x28\x73\x79\x73\x2e"
  "\x67\x65\x74\x70\x69\x64\x28\x29\x2c\x73\x79\x73\x2e\x53\x49\x47\x54\x53"
  "\x54\x50\x29\x3b\x62\x72\x65\x61\x6b\x3b\x64\x65\x66\x61\x75\x6c\x74\x3a"
  "\x61\x3d\x77\x6f\x72\x6c\x64\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74"
  "\x4c\x69\x6e\x65\x28\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x29\x2c\x61\x2e"
  "\x69\x6e\x73\x65\x72\x74\x28\x63\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e"
  "\x2c\x63\x29\x2c\x63\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x3c\x61\x2e"
  "\x6c\x65\x6e\x67\x74\x68\x2d\x31\x3f\x28\x63\x6f\x72\x65\x2e\x77\x69\x6e"
  "\x64\x6f\x77\x73\x2e\x62\x75\x66\x66\x65\x72\x2e\x69\x6e\x73\x63\x68\x28"
  "\x63\x29\x2c\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x28\x30\x2c\x31\x29\x29"
  "\x3a\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e\x62\x75\x66\x66"
  "\x65\x72\x2e\x61\x64\x64\x73\x74\x72\x28\x63\x29\x2c\x63\x6f\x72\x65\x2e"
  "\x63\x6f\x6c\x75\x6d\x6e\x2b\x2b\x7d\x65\x6c\x73\x65\x20\x73\x77\x69\x74"
  "\x63\x68\x28\x63\x29\x7b\x63\x61\x73\x65\x20\x22\x6b\x65\x79\x5f\x62\x61"
  "\x63\x6b\x73\x70\x61\x63\x65\x22\x3a\x30\x3c\x63\x6f\x72\x65\x2e\x63\x6f"
  "\x6c\x75\x6d\x6e\x26\x26\x28\x61\x3d\x77\x6f\x72\x6c\x64\x2e\x62\x75\x66"
  "\x66\x65\x72\x2e\x67\x65\x74\x4c\x69\x6e\x65\x28\x63\x6f\x72\x65\x2e\x6c"
  "\x69\x6e\x65\x29\x2c\x63\x6f\x72\x65\x2e\x77\x69\x6e\x64\x6f\x77\x73\x2e"
  "\x62\x75\x66\x66\x65\x72\x2e\x6d\x76\x64\x65\x6c\x63\x68\x28\x64\x2c\x62"
  "\x2d\x31\x29\x2c\x63\x75\x72\x73\x65\x73\x2e\x73\x74\x64\x73\x63\x72\x2e"
  "\x6d\x6f\x76\x65\x28\x64\x2b\x31\x2c\x62\x2d\x31\x29\x2c\x63\x6f\x72\x65"
  "\x2e\x63\x6f\x6c\x75\x6d\x6e\x2d\x2d\x2c\x0a\x61\x2e\x65\x72\x61\x73\x65"
  "\x28\x63\x6f\x72\x65\x2e\x63\x6f\x6c\x75\x6d\x6e\x2c\x31\x29\x29\x3b\x62"
  "\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x22\x6b\x65\x79\x5f\x64\x6f\x77"
  "\x6e\x22\x3a\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65\x3c\x77\x6f\x72\x6c\x64"
  "\x2e\x62\x75\x66\x66\x65\x72\x2e\x6c\x65\x6e\x67\x74\x68\x2d\x31\x26\x26"
  "\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x28\x31\x29\x3b\x62\x72\x65\x61\x6b"
  "\x3b\x63\x61\x73\x65\x20\x22\x6b\x65\x79\x5f\x65\x6e\x64\x22\x3a\x63\x6f"
  "\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x72\x69\x67\x68\x74\x28\x29\x3b\x62\x72"
  "\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x22\x6b\x65\x79\x5f\x68\x6f\x6d\x65"
  "\x22\x3a\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x2e\x6c\x65\x66\x74\x28\x29"
  "\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x22\x6b\x65\x79\x5f\x6c"
  "\x65\x66\x74\x22\x3a\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x28\x30\x2c\x2d"
  "\x31\x29\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x22\x6b\x65\x79"
  "\x5f\x72\x69\x67\x68\x74\x22\x3a\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x28"
  "\x30\x2c\x31\x29\x3b\x62\x72\x65\x61\x6b\x3b\x63\x61\x73\x65\x20\x22\x6b"
  "\x65\x79\x5f\x75\x70\x22\x3a\x30\x3c\x63\x6f\x72\x65\x2e\x6c\x69\x6e\x65"
  "\x26\x26\x63\x6f\x72\x65\x2e\x6d\x6f\x76\x65\x28\x2d\x31\x29\x7d\x7d\x29"
  "\x3b\x77\x6f\x72\x6c\x64\x2e\x61\x64\x64\x45\x76\x65\x6e\x74\x4c\x69\x73"
  "\x74\x65\x6e\x65\x72\x28\x22\x6b\x65\x79\x70\x72\x65\x73\x73\x22\x2c\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x7b\x63\x6f\x72\x65\x2e\x64\x72\x61"
  "\x77\x53\x74\x61\x74\x75\x73\x28\x29\x7d\x29\x3b\x77\x6f\x72\x6c\x64\x2e"
  "\x61\x64\x64\x45\x76\x65\x6e\x74\x4c\x69\x73\x74\x65\x6e\x65\x72\x28\x22"
  "\x6b\x65\x79\x70\x72\x65\x73\x73\x22\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x28\x29\x7b\x6c\x6f\x67\x28\x22\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d"
  "\x3d\x3d\x3d\x3d\x3d\x22\x29\x3b\x66\x6f\x72\x28\x76\x61\x72\x20\x61\x3d"
  "\x77\x6f\x72\x6c\x64\x2e\x62\x75\x66\x66\x65\x72\x2e\x67\x65\x74\x43\x6f"
  "\x6e\x74\x65\x6e\x74\x73\x28\x29\x2c\x62\x3d\x30\x3b\x62\x3c\x61\x2e\x6c"
  "\x65\x6e\x67\x74\x68\x3b\x62\x2b\x2b\x29\x6c\x6f\x67\x28\x61\x5b\x62\x5d"
  "\x29\x7d\x29\x3b\x0a\x77\x6f\x72\x6c\x64\x2e\x61\x64\x64\x45\x76\x65\x6e"
  "\x74\x4c\x69\x73\x74\x65\x6e\x65\x72\x28\x22\x61\x66\x74\x65\x72\x5f\x6b"
  "\x65\x79\x70\x72\x65\x73\x73\x22\x2c\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28"
  "\x29\x7b\x63\x6f\x72\x65\x2e\x75\x70\x64\x61\x74\x65\x41\x6c\x6c\x57\x69"
  "\x6e\x64\x6f\x77\x73\x28\x29\x7d\x29\x3b");

v8::Local<v8::Script> GetCoreScript() {
  v8::HandleScope scope;
  v8::Local<v8::String> src = v8::String::New(core_src);
  v8::Local<v8::String> src_name = v8::String::New("core.js");
  v8::Local<v8::Script> script = v8::Script::New(src, src_name);
  return scope.Close(script);
}
}