// Algo 35
#include<iostream>
using namespace std;
int main()
{
	int amount1,amount2;
	int high;
	cout<<"Enter Amount One"<<endl;
	cin>>amount1;
	cout<<"Enter Amout 2"<<endl;
	cin>>amount2;
	
	if(amount1>10)
	{
		if(amount2<100)
		{
			high=amount1;
			if(amount2>high)
			{
				high=amount2;
			}
			cout<<"High is "<<high<<endl;
			
		}
	}
	//
	return 0;
}
