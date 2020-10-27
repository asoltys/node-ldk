# node-ldk
[![Build Status](https://travis-ci.com/arik-so/node-ldk.svg?branch=master)](https://travis-ci.com/arik-so/node-ldk)

Example implementation of LDK in Node.

## Setup

### Dynamic Libraries

This repository comes with a dynamic library pre-compiled for OS X users for ease of setup,
but with newer versions and differing platforms/architectures, should be replaced with the
output from the `rust-lightning` repository – specifically, the outputs generated by
running the therein contained `genbindings.sh` script.

Once generated, the compiled library should be copied to the `lib/` directory at the top
of this project folder. It should typically be named `liblightning.dylib` or
`liblightning.so`.

### Header Files

The `genbindings.sh` script referenced in the [Dynamic Libraries](#Dynamic Libraries)
section above also produces header files, one for C++ (`lightningpp.hpp`) and two
for C: `rust_types.h` and `lightning.h`.

The C header files need to be copied to the `include/` directory at the top of this
project.

### Javascript/C-Interface

There are a couple steps necessary to now expose the newly added header files to
Javascript calls.

First, the C include files need to be combined into one. Simply run:

`make merge-include-files`

and that should do that. Next, a Javascript FFI interface file needs to be generated
that parses all the types in the header files and generates methods callable from
within Javascript. On Mac, simply run:

`make gen-interface-mac`

For other operating systems, the command may require slight modification.

Lastly, to fix a couple issues with the `ffi.h` file that the previous step generated,
simply run:

`sanitize-ffi`

Voilá! 
