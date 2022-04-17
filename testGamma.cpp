#include "DecodingClasses/Decodings/GammaDecoding.hpp"
#include "EncodingClasses/Encodings/GammaEncoding.hpp"

using namespace std;

int main () {

    GammaDecoding decoder;
    GammaEncoding encoder;

    encoder.openFile("temp.txt");
    encoder.encodeSymbol(0xFFFFFFFF);
   // encoder.encodeSymbol(321);
    encoder.closeFile();
    cout<<"Decoding"<<endl;
    decoder.openFile("temp.txt");
    cout<<decoder.decodeSymbol()<<endl;
  //  cout<<decoder.decodeSymbol()<<endl;
    decoder.closeFile();
}
