#include "BitWriter.hpp"
#include<string>

using uc = unsigned char;

BitWriter::BitWriter(const std::string& outputName) {
        output = std::ofstream(outputName);
        if (!output.good()) {
            throw std::logic_error("IO exception");
        }
    }

void BitWriter::writeBit(const bool input) {
    buffer = (unsigned char)(buffer<<1);
    buffer += input ? 1 : 0;
    bufferCounter++;
    if (bufferCounter == 8) {
        bufferCounter = 0;
        output.put(buffer);
        buffer = 0;
    }
}

BitWriter::~BitWriter() {
    if (bufferCounter > 0) {
        while (bufferCounter < 8) {
            buffer = (uc)(buffer << 1);
            bufferCounter++;
        }
        output.put(buffer);
    }
    output.close();
}

void BitWriter::open(const std::string& filename) {
    if (output.is_open()) {
        output.close();
    }
    output = std::ofstream(filename);
    if (!output.good()) {
        throw std::logic_error("IO exception");
    }
}

void BitWriter::close() {
    output.close();
}