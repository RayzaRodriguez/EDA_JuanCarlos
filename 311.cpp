#include <iostream>
#include <vector>
using namespace std;

int gVect[100];
int gnCount;

void Insert(int elem)
{
	if(gnCount < 100)
		gVect[gnCount++] = elem;
}

int main(int argc, char *argv[]) 
{
	for(int i=0; i<100; i++)
	{
		Insert(i);
	}
	for(int i=0; i<100; i++)
	{
		cout<<gVect[i]<<" ";
	}
	
	return 0;
}

