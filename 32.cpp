#include <iostream>
#include <vector>
using namespace std;

struct Vector
{
	int*m_pVect;
	int m_nCount;
	int m_nMax;
	int m_nDelta=10;
};

void Resize(Vector *pThis)
{
	int *pTemp, i;
	pTemp = new int[pThis->m_nMax + pThis->m_nDelta];
	for(i = 0 ; i < pThis->m_nMax ; i++)
		pTemp[i] = pThis->m_pVect[i];
	delete [ ] pThis->m_pVect;
	pThis->m_pVect = pTemp;
	
	pThis->m_nMax += pThis->m_nDelta;
}

void Insert(Vector *pThis, int elem)
{
	if( pThis->m_nCount == pThis->m_nMax ) 
		Resize(pThis); 
	pThis->m_pVect[pThis->m_nCount++] = elem;
}


	
int main(int argc, char *argv[]) 
{
	Vector *fila=NULL;

	for(int i=0; i<100; i++)
	{
		Insert(fila,i);
	}
	
	
	
	return 0;
}

