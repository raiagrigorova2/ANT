#ifndef CVECTOR_H
#define CVECTOR_H

#include "InvalidPosition.h"
#include "CException.h"
#include "CapacityException.h"
class CVector
{
    public:
        CVector();
        virtual ~CVector();
        void push_back(char element);
        void print ();
        void clear();
        bool empty();
        void insert (char element,int pos);

        //This method is made in order to test the try-catch block
        void setCapacity(int c){m_nCap = c;}
        void enlarge();

    protected:

    private:
        char* m_pData;
        int m_nCap;
        int m_nSize;



};

#endif // CVECTOR_H
