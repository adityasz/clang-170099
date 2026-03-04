#!/usr/bin/env bash

command="/usr/bin/clang++ -w -stdlib=libc++ -std=c++26 -march=native -O3 -ffast-math -o /dev/null -c Foo.cppm"

if ! out=$(${command} 2>&1); then
    if [[ "$out" != "PLEASE submit"* ]]; then
        exit 1  # does not compile and does not crash compiler
    else
        exit 0
    fi
fi

# The segfault does not happen every single time. But it also does not make
# sense to compile 20 times considering that cvise does thousands of
# transformations: We can just continue along the transformations that resulted
# in a crash in one compilation rather than wasting time with this.
#
# for _ in $(seq 1 20); do
#     ${command} || { exit 0; }
# done

exit 1
