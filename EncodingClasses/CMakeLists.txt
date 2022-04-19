cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER "clang++")

# set the project name
project(encoder)

set(SRC_LIST
        encoder.cpp
        LzwClasses/LZWEncodingProcess.cpp
        Encodings/GammaEncoding.cpp
        Encodings/Encoding.cpp
        LzwClasses/LzwEncoder.cpp
        BitBuffers/BitWriter.cpp
        Encodings/DeltaEncoding.cpp
        Encodings/OmegaEncoding.cpp
        Encodings/FibonacciEncoding.cpp
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -pedantic)