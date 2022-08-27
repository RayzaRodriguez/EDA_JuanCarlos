#include <iostream>
#include <vector>
using namespace std;

int *gpVect = NULL; 
int gnCount = 0;
int gnMax = 0;

void Resize()
{
	const int delta = 10; 
	//gpVect = realloc(gpVect, sizeof(int) * (gnMax + delta));
	int *pTemp, i;
	pTemp = new int[gnMax + delta];
	for(i = 0 ; i < gnMax ; i++)
	pTemp[i] = gpVect[i];
	delete [ ] gpVect;
	gpVect = pTemp;
	
	gnMax += delta; 
}

void Insert(int elem)
{
	if( gnCount == gnMax ) 
		Resize(); 
	gpVect[gnCount++] = elem; 
}

int main(int argc, char *argv[]) 
{
	for(int i=0; i<100; i++)
	{
		Insert(i);
	}
	for(int i=0; i<100; i++)
	{
		cout<<gpVect[i]<<" ";
	}
	return 0;
}

