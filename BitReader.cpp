#include "BitReader.hpp"

BitReader::BitReader(const std::string& inputName) {
    input = std::ifstream(inputName);
    if (!input.good()) {
        throw std::logic_error("IO exception");
    }
}

BitReader::~BitReader() {
    input.close();
}

bool BitReader::getBit() {
    bool result;
    if ((buffer & msbMask) == msbMask) {
        result = true;
    }
    else {
        result = false;
    }
    buffer = (uc)(buffer << 1);
    bufferCounter++;
    if (bufferCounter == 8) {
        bufferCounter = 0;
        buffer = input.get();
    }
    return result;
}

void BitReader::open(const std::string& filename) {
    if (input.is_open()) {
        input.close();
    }
    input.open(filename);
    buffer = 0;
    bufferCounter = 0;
}

void BitReader::close() {
    if (input.is_open()) {
        input.close();
    }
}

bool BitReader::good() {
    return input.good();
}