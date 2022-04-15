cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER "clang++")

# set the project name
project(Lista 3)

# add the executable
add_executable(encoder encoder.cpp LZWEncodingProcess.cxx GammaEncoding.cxx Encoding.cxx LzwEncoder.cxx BitWriter.cxx)