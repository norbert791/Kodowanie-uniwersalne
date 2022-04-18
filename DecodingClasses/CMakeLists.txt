cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER "clang++")

# set the project name
project(decoder)

set(SRC_LIST
        decoder.cpp
        LzwClasses/LZWDecodingProcess.cpp
        Decodings/GammaDecoding.cpp
        Decodings/Decoding.cpp
        LzwClasses/LzwDecoder.cpp
        BitBuffers/BitReader.cpp
        Decodings/DeltaDecoding.cpp
        Decodings/OmegaDecoding.cpp
        )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -pedantic)