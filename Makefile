gen-interface:
	cd src/ldk/ && ../../node_modules/ffi-generate/bin/ffi-generate.js -I /usr/lib/llvm-6.0/lib/clang/6.0.0/include -I /usr/lib/llvm-6.0/include -L /usr/lib/llvm-6.0/lib -x -f ../../include/joint_headers.h -l ../../lib/liblightning > ./ffi.js
