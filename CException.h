#ifndef CEX
#define CEX

#include <iostream>
#include <string>

using namespace std;

class CException{
public:
    string message;
    const int ERROR_CODE = 1;
    CException(){message = "Ooopsie!\n"; }
    void print(){cout << message << endl;}

};

#endif // CEX
