//
#include<iostream>
using namespace std;
int main()
{
	const float price=59.95;
	float Sale=0.20;
	float relief;	
	float Sale_Price;
	
	//Calculate Sale Price
	
	relief=price*Sale;
	Sale_Price=price-relief;
	
	cout<<"Sales Price is "<<Sale_Price<<endl;
	
	//Program Terminate
	return 0;
}
