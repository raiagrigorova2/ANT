#include <iostream>

using namespace std;

#include "CVector.h"
#include "CRecipe.h"
int main()
{
    CVector <char> vec;
    CVector <int> vec2;

    CVector <CRecipe> vec3;
    vec3.push_back(CRecipe("Palachinki",1));

//    for(char c = 'a'; c <= 'z'; c++){
//        vec.push_back(c);
//        vec.print();
//
//    }
//    for(int i = 0; i < 33; i += 3){
//        vec.insert('#', i);
//        vec.print();
//    }

    for(int i = 0; i < 10 ; i++){
        vec2.push_back(i);
        vec2.print();
    }

    for(int i = 0; i < 10 ; i+=4){
        vec2.insert(99,i);
        vec2.print();
    }

    CRecipe res;
    cin>>res;

    vec3.push_back(res);
    vec3.print();

    return 0;
}
