// Mobile Service provider

#include<iostream>
using namespace std;


int main()
{
	int choice;
	int GB;
	double charges;
	int bill,gb;
	double Total;
	
	cout<<"\t\t\tMOBILE SERVICE PROVIDER\n\n";
	cout<<"1. Package A"<<endl;
	cout<<"2. Package B"<<endl;
	cout<<"3. Package C"<<endl;
	cout<<"4. Quit"<<endl;
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter Number of GB"<<endl;
		cin>>GB;
		if(GB<=4)
		{
			charges=39.99;
		}
		if(GB>4)
		{
			gb=GB-4;
			bill=gb*10;
			charges=39.99+bill;;
		}
		cout<<"Charges are "<<charges<<endl;
	}
	
	
	
		else if(choice==2)
	{
		cout<<"Enter Number of GB"<<endl;
		cin>>GB;
		if(GB<=8)
		{
			charges=59.99;
		}
		if(GB>8)
		{
			gb=GB-8;
			bill=gb*5;
			charges=59.99+bill;;
		}
		cout<<"Charges are "<<charges<<endl;
	}
	
	
		else if(choice==3)
	{
		charges=69.99;
		cout<<"Charges are "<<charges<<endl;
		
	}
	else if(choice==4)
	{
		cout<<"Quit the Program"<<endl;
	}
	else
	{
		cout<<"OOpss!!!!Invalid Input\n";
	}
	
	//
	return 0;
}
