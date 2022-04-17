#include "Decoding.hpp"

class GammaDecoding : public Decoding {
    public:
        uint32_t decodeSymbol() override final;
        bool good() override final;
        void openFile(const std::string& filename) override final;
    private:
        void decodeToCache();
        bool isGood = true;
        uint32_t cache = 0;
};