#include <iostream>
using namespace std;
#include <vector>



class CVector
{
private:
	int *m_pVect, 
		m_nCount, 
		m_nMax;
	int m_nDelta=10; 
	void Init(int delta); 
	void Resize(); 
public:
	CVector(int delta)
	{
		m_nDelta = delta;
	};
	void Insert(int elem); 
};

void CVector:: Resize()
{
	const int delta = 10; 
	int *pTemp, i;
	pTemp = new int[m_nMax + m_nDelta]; 
	for(i = 0 ; i < m_nMax ; i++) 
		pTemp[i] = m_pVect[i]; 
	delete [ ] m_pVect; 
	m_pVect = pTemp; 
	m_nMax += delta; 
	
	m_nMax += delta; 
}

void CVector::Insert(int elem)
{
	if( m_nCount == m_nMax ) 
		Resize(); 
	m_pVect[m_nCount++] = elem; 
}



int main(int argc, char *argv[]) 
{
	CVector fila(10);
	for(int i=0; i<100; i++)
	{
		fila.Insert(i);
	}
	return 0;
}

