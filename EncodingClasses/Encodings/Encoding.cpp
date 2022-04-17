#include "Encoding.hpp"

void Encoding::openFile(const std::string& filename) {
    writer.open(filename);
}