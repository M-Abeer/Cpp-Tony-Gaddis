// CP 4.6
#include<iostream>
using namespace std;
int main()
{
	int Price;
	float DiscountRate;
	
	
	cout<<"Value of Price is "<<endl;
	cin>>Price;
	
	if(Price>500)
	{
		DiscountRate=0.2f;
		cout<<DiscountRate;
	}
	// Program Terminate
	return 0;
}
