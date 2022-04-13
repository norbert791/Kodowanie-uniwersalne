#include<string>
#include<fstream>

using uc = unsigned char;

class BitReader {
    public:
        BitReader(const std::string& inputName);
        ~BitReader();
        bool getBit();
    private:
        uc buffer;
        uc bufferCounter = 0;
        const static uc msbMask = 128; 
        std::ifstream input;
};