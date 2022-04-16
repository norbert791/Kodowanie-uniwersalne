#include "EncodingClasses/LzwClasses/LzwEncoder.hpp"
#include "LzwClasses/LzwDecoder.hpp"

using namespace std;

int main() {

    string start = "wabba-wabba-wabba-woo-woo-woo";

    LzwEncoder temp({{"a", 0}, {"b", 1}, {"o", 2}, {"w", 3}, {"-", 4}});
    
    uint32_t i = 0;
    uint32_t j = 0;
    string s = "";
    vector<uint32_t> results = {};
    while (i < start.length()) {
        j = i + 1;
        s = start[i];
        while (j < start.length() && temp.containsSymbol(s + start[j])) {
            s += start[j++];
        }
        if (j == start.length()) {
            results.push_back(temp.getCode(s));
            break;
        }
        results.push_back(temp.getCode(s));
        temp.addCode(s + string(1, start[j]));
        i = j;
    }
    
    for (auto el : results) {
        cout<<el<<" ";
    }
    cout<<endl;

    LzwDecoder temp2 ({{"a", 0}, {"b", 1}, {"o", 2}, {"w", 3}, {"-", 4}}, 3);

    string decoded = "w";

    auto number = results.begin();
    number++;

    while (number != results.end()) {
        auto temp3 = temp2.decode(*number);
        cout<<temp3<<" ";
        decoded += temp3;
        number++;
    }
    cout<<endl<<decoded<<endl;
    return 0;
}