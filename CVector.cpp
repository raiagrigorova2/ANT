#include "CVector.h"


#include <stdlib.h>
#include <iostream>
using namespace std;
CVector::CVector()
{
    m_pData = NULL;
    m_nCap = 0;
    m_nSize = 0;
}

CVector::~CVector()
{
    delete [] m_pData;
    m_pData = NULL;
    m_nCap = 0;
    m_nSize = 0;
}

void CVector :: push_back(char element){
    enlarge();

    m_pData [m_nSize] = element;
    m_nSize++;

    return;
}

void CVector :: enlarge(){
    try{

    if(m_nSize < m_nCap){
        throw CapacityException();
    }

    m_nCap *=2;

    if(m_nCap == 0){
        m_nCap = 4;
    }

     char* pData2 = new char [m_nCap];

     for(int i=0; i<m_nSize;i++){
        pData2[i] = m_pData[i];
     }

     delete [] m_pData;
     m_pData = pData2;}

     catch(CapacityException a){
        a.print();
     }


}

void CVector :: print(){
    cout << "size:  " << m_nSize << " cap:  " << m_nCap << " ";
    for(int i = 0;i < m_nSize;i++){
        cout << m_pData[i] << " ";
    }
    cout<<endl;
    return;
}

void CVector :: clear(){
    m_nSize = 0;
    return;
}

bool CVector :: empty(){
    return (m_nSize == 0);
}
void CVector :: insert(char element, int pos){

    try{
    if(pos == m_nSize){
        push_back(element);
        return;
    }
    if(pos > m_nSize || pos < 0){
        throw InvalidPosition();
    }

    enlarge();

    for (int i = m_nSize; i > pos;i--){
        m_pData[i] = m_pData[i-1];
    }
    m_pData[pos] = element;
    m_nSize++;
    return;
    }
    catch (InvalidPosition a){
        a.print();
    }

}



