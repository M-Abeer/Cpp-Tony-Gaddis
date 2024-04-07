//  Software sales
#include<iostream>
using namespace std;
int main()
{
	const int RETAIL=99;
	int Quantity;
	float Price,Final;
	
	// Get Data from User
	cout<<"Enter Quantity"<<endl;
	cin>>Quantity;
	
	if(Quantity>0)
	{
		if( Quantity >=10 && Quantity <= 19)
		{
			Price=Quantity*RETAIL*0.20;
			Final=(Quantity*RETAIL)-Price;
			cout<<"Price is "<<Final<<endl;			
		}
		
		else if(Quantity>=20&&Quantity<=49)
		{
			Price=Quantity*RETAIL*0.30;
			Final=(Quantity*RETAIL)-Price;
			cout<<"Price is "<<Final<<endl;			
		}
		
		else if(Quantity>=50&&Quantity<=99)
		{
			Price=Quantity*RETAIL*0.40;
			Final=(Quantity*RETAIL)-Price;
			cout<<"Price is "<<Final<<endl;			
		}
		
		else if(Quantity>=100)
		{
			Price=Quantity*RETAIL*0.50;
			Final=(Quantity*RETAIL)-Price;
			cout<<"Price is "<<Final<<endl;			
		}
		
	}
	else
	{
		cout<<"Invalid Input";
	}
	
	// Program terminate
	return 0;
}
