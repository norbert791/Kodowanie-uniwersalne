#include "Decoding.hpp"

void Decoding::openFile(const std::string& filename) {
    reader.open(filename);
}

void Decoding::closeFile() {
    reader.close();
}