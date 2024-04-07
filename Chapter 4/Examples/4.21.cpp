// 4.21
#include<iostream>
using namespace std;
#include<string>
int main()
{
	// Constants
	const float PRICE_A=249.0f;
	const float PRICE_B=199.0f;
	
	string Model;
	
	cout<<"Enter a Model"<<endl;
	getline(cin,Model);
	
	if(Model=="Oppo")
	{
		cout<<"The Price is "<<PRICE_A<<endl;
	}
	else if(Model=="Apple")
	{
		cout<<"The Price is "<<PRICE_B<<endl;
	}
	else 
	{
		cout<<"Invalid"<<endl;
	}
	// Program Terminate
	return 0;
	
}s
