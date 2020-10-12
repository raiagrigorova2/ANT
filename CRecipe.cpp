#include "CRecipe.h"

CRecipe::CRecipe()
{
    m_time = 0;
    m_recipe = "";
}

CRecipe::~CRecipe()
{
     m_recipe = "";
}

CRecipe :: CRecipe(string s, int t){
    m_recipe = s;
    m_time = t;
    return;
}

ostream& operator <<  (ostream& out, const CRecipe& d){
    cout << d.m_recipe << " " << d.m_time <<endl;

    return out;
}

istream& operator >> (istream& in, CRecipe& d){
    cin >> d.m_recipe;
    cin >> d.m_time;

    return in;
}
