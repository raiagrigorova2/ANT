#include <iostream>
#include "CVector.h"
using namespace std;


int main()
{
    CVector vec;
    for(char c = 'a'; c <= 'z'; c++){
        vec.push_back(c);
        vec.print();

    }
    for(int i = 0; i < 33; i += 3){
        vec.insert('#', i);
        vec.print();
    }

    return 0;
}
