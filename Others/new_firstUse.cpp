#include <iostream>
#include <cstring>
using namespace std;

char * makeStrAdr(int len){

    char * str = new char[len];
    return str;
}

int main() {

    char * str = makeStrAdr(50);
    strcpy(str, "Hello, new!");
    cout << str << endl;
    delete []str;
}