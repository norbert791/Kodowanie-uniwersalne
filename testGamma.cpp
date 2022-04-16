#include "DecodingClasses/Decodings/GammaDecoding.hpp"
#include "EncodingClasses/Encodings/GammaEncoding.hpp"

using namespace std;

int main () {

    GammaDecoding decoder;
    GammaEncoding encoder;

    encoder.openFile("temp.txt");
    encoder.encodeSymbol(123);
    encoder.encodeSymbol(321);
    encoder.closeFile();

    decoder.openFile("temp.txt");
    cout<<decoder.decodeSymbol()<<endl;
    cout<<decoder.decodeSymbol()<<endl;
    decoder.closeFile();
}
