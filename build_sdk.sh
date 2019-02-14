#!/bin/bash

MAKE=make
if command -v python > /dev/null ; then
  MAKE="make -j $(python -c 'import multiprocessing as mp; print(int(mp.cpu_count()))')"
fi

echo $MAKE

rm -rf sdk_build
mkdir sdk_build
cd sdk_build
cmake -DBUILD_FUNCTION_TESTS=OFF -DBUILD_UNIT_TESTS=OFF -DENABLE_COVERAGE=OFF ..
$MAKE