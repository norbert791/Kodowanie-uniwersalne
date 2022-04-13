#include "Encoding.hpp"
#include <vector>
#include <memory>

class LZWEncodingProcess {
    public:
        void setSecondaryAlgorithm(std::unique_ptr<Encoding> encoding);
        void runProcess(const std::string& inputName, const std::string& outputName);
        void setAlphabet(const std::vector<std::string>& alphabet);

    private:
        std::unique_ptr<Encoding> secondaryAlgorithm;
        std::vector<std::string> alphabet;
};