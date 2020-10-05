#ifndef CVECTOR_H
#define CVECTOR_H


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

    protected:

    private:
        char* m_pData;
        int m_nCap;
        int m_nSize;

        void enlarge();

};

#endif // CVECTOR_H
