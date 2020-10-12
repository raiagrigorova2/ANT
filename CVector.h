#ifndef CVECTOR_H
#define CVECTOR_H

#include <stdlib.h>
#include <iostream>
using namespace std;

template <typename T>
class CVector
{
    public:
        CVector();
        virtual ~CVector();
        void push_back(T element);
        void print ();
        void clear();
        bool empty();
        void insert (T element,int pos);
        void erase (int pos);


        void set_at (int ind, T value);
        T get_at(int ind);

    protected:

    private:
        T* m_pData;
        int m_nCap;
        int m_nSize;

        void enlarge();

};

template <typename T>
void CVector <T> :: set_at(int ind, T value){
    if(ind < 0 || ind >= m_nSize){return;}

    m_pData[ind] = value;
    return;
}

template <typename T>
T CVector <T> :: get_at(int ind){
    if(ind < 0 || ind >= m_nSize){
        return;
    }
    return m_pData[ind];
}

template <typename T>
CVector <T>::CVector()
{
    m_pData = NULL;
    m_nCap = 0;
    m_nSize = 0;
}

template <typename T>
CVector <T> ::~CVector()
{
    delete [] m_pData;
    m_pData = NULL;
    m_nCap = 0;
    m_nSize = 0;
}


template <typename T>
void CVector <T>:: push_back(T element){
    enlarge();

    m_pData [m_nSize] = element;
    m_nSize++;

    return;
}


template <typename T>
void CVector <T> :: enlarge(){
    if(m_nSize < m_nCap){
        return;
    }
    m_nCap *=2;

    if(m_nCap == 0){
        m_nCap = 4;
    }
     T* pData2 = new T [m_nCap];

     for(int i=0; i<m_nSize;i++){
        pData2[i] = m_pData[i];
     }

     delete [] m_pData;
     m_pData = pData2;

}


template <typename T>
void CVector <T>:: print(){
    cout << "size:  " << m_nSize << " cap:  " << m_nCap << " ";
    for(int i = 0;i < m_nSize;i++){
        cout << m_pData[i] << " ";
    }
    cout<<endl;
    return;
}


template <typename T>
void CVector <T>:: clear(){
    m_nSize = 0;
    return;
}


template <typename T>
bool CVector <T> :: empty(){
    return (m_nSize == 0);
}


template <typename T>
void CVector <T>:: insert(T element, int pos){
    if(pos == m_nSize){
        push_back(element);
        return;
    }
    if(pos > m_nSize){
        return;
    }

    enlarge();

    for (int i = m_nSize; i > pos;i--){
        m_pData[i] = m_pData[i-1];
    }
    m_pData[pos] = element;
    m_nSize++;
    return;
}


template <typename T>
void CVector <T> :: erase (int pos){
    if(pos < 0 || pos >= m_nSize)return;

    for(int i = pos; i < m_nSize - 1; i++){
        m_pData[i] = m_pData[i+1];
    }
    m_nSize--;
    return;
}



#endif // CVECTOR_H
