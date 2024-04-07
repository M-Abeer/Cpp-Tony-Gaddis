// Wi-Fi Diagnostic Tree

#include<iostream>
using namespace std;
#include<string>

int main()
{
	string a;
	
	
	cout<<"Reboot the Computer and Connect Again"<<endl;
	
	cout<<"Did you fix the Problem?"<<endl;
	cin>>a;
	if(a=="yes")
	{
		
	
	}
	if(a=="no")
	{
		cout<<"Reboot the Computer and Connect Again"<<endl;
		cout<<"Did you fix the Problem?"<<endl;
		cin>>a;
		
		if(a=="yes")
		{
			
		}
		if(a=="no")
		{
			cout<<"Make Sure that Cables b/w Modem and router are plugges in Properly"<<endl;
			
			cout<<"Did you fix the Problem?"<<endl;
			cin>>a;
		
			if(a=="yes")
			{
				
			}
			if(a=="no")
			{
				cout<<"Make the Router to the New Location and try to Connect"<<endl;
				
				cout<<"Did you fix the Problem?"<<endl;
				cin>>a;
				if(a=="yes")
				{
					
				}
				if(a=="no")
				{
					cout<<"Get a New router"<<endl;
				}
				
				
			}		
				
		}
		
	}
	
	
	// Program Terminate
	return 0;
}
