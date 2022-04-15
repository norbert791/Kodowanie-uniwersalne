#include "BitReader.hpp"

class Decoding {
    public:
        virtual uint32_t decodeSymbol();
        void openFile(const std::string& filename);
        void closeFile();
        bool good();
    protected:
        BitReader reader;
};