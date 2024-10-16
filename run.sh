#!/bin/bash

cmake --build .
if [ $? -ne 0 ]; then
  echo "Build failed."
  exit 1
fi

./ray_tracer > image.ppm
#if [ $? -ne 0 ]; then
#  echo "Ray tracer execution failed."
#  exit 1
#fi
#
#display image.ppm

