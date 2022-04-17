#include<string>
#include<iostream>

using namespace std;


int main() {

    string temp = "";

    temp += string(1, 200);
    cout<<temp<<endl;
    return 0;
}