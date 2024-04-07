// Shipping Charges
#include<iostream>
using namespace std;
int main()
{
	float weight,distance,Charges;
	
	// 
	cout<<"Enter Weight"<<endl;
	cin>>weight;
	cout<<"Enter Distnace"<<endl;
	cin>>distance;
	
	//
	if(weight<=0)
	{
		cout<<"Sorry Invalid Input"<<endl;
	}
	else
	{
		
		if(distance<10&&distance>3000)
		{
			cout<<"This is out of Range"<<endl;
		}
		else
		{
			
				if(weight<=2)
			{
				Charges=(distance/500)*1.10;
				cout<<"Charges are "<<Charges<<endl;
			}
			else if(weight>2&&weight<=6)
			{
				Charges=(distance/500)*2.20;
				cout<<"Charges are "<<Charges<<endl;
			}
			else if(weight>6&&weight<=10)
			{
				Charges=(distance/500)*3.70;
				cout<<"Charges are "<<Charges<<endl;
			}
			else if(weight>10&&weight<=20)
			{
				Charges=(distance/500)*4.80;
				cout<<"Charges are "<<Charges<<endl;
			}
	
		}
	}
	// Program terminate
	return 0;
	
}
