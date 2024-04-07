// Example 9.8
#include<iostream>
using namespace std;
int main()
{
	const int NUM_COINS=5;
	double coins[NUM_COINS]={0.05,0.1,0.25,0.5,1.0};
	double *ptr;
	int i;
	
	for(i=0;i<NUM_COINS;i++)
	{
		ptr=&coins[i];
		
		// Display the Contents of Elements
		cout<<*ptr<<endl;
	}
	
	//
	return 0;
}
