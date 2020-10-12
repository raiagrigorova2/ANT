#ifndef CRECIPE_H
#define CRECIPE_H

#include <string>
using namespace std;
#include <iostream>
class CRecipe
{
    public:
        CRecipe ();
        virtual ~CRecipe();
        CRecipe (string s, int t);

        friend ostream& operator << (ostream& out, const CRecipe& d);
        friend istream& operator >> (istream& in, CRecipe& d);
    protected:

    private:
        int m_time;
        string m_recipe;
};

ostream& operator << (ostream& out, const CRecipe& d);
istream& operator >> (istream& in, CRecipe& d);

#endif // CRECIPE_H
