#include "Encoding.hpp"

void Encoding::openFile(const std::string& filename) {
    writer.open(filename);
}

size_t Encoding::getBytesWroter() {
    return writer.getBytesWrote();
}