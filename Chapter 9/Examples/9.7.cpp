// Example 9.7
#include<iostream>
using namespace std;
int main()
{
	const int NUM_COINS=5;
	double coins[NUM_COINS]={0.05,0.1,0.25,0.5,1.0};
	double *ptr;
	int i;
	
	// Assign the Address of CoinsArray to ptr;
	ptr=coins;
	
	// Display the COntents of Array with Pointer Subsripts
	cout<<"Here are the Values in the Coin Array.."<<endl;
	for(i=0;i<NUM_COINS;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"Display the Contents of Array AGain"<<endl;
	for(i=0;i<NUM_COINS;i++)
	{
		cout<<*(coins+i)<<"\t";
	}
	
	//
	return 0;
}
