#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>


int main()
{
	const int Max=100;
	const int Min=1;
	
	unsigned seed=time(0);
	srand(seed);
	
	for(int i=0;i<365;i++)
	{
		cout<<rand()%((Max-Min+1)-Min)<<endl;
	}
}
