#include <iostream>
#include "CVector.h"

#include "InvalidPosition.h"
using namespace std;


int main()
{
    CVector vec;
//    for(char c = 'a'; c <= 'z'; c++){
//        vec.push_back(c);
//        vec.print();
//
//    }
//    for(int i = 0; i < 33; i += 3){
//        vec.insert('#', i);
//        vec.print();
//    }

    vec.insert(1,0);

    //Invalid position exception
    vec.insert(1,3463643643);

    //Capacity exception
    vec.setCapacity(2525);
    vec.enlarge();


    return 0;
}
