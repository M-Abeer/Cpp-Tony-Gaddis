// CP 3.11
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=12;
	double x=3.4,z=9.1;
	//A
	cout<<b/a<<endl;
	//B
	cout<<x*a<<endl;
	
	//C
	cout<<static_cast<double>(b/a)<<endl;
	
	//D
	cout<<static_cast<double>(b)/a<<endl;
	
	//E
	cout<<b/static_cast<double>(a)<<endl;
	
	//F
	cout<<static_cast<double>(b)/static_cast<double>(a)<<endl;
	
	//G
	cout<<b/static_cast<int>(x)<<endl;
	
	//H
	cout<<static_cast<int>(x)*static_cast<int>(z)<<endl;
	
	//I
	cout<<static_cast<int>(x*z)<<endl;
	
	//J
	cout<<static_cast<double>(static_cast<int>(x)*static_cast<int>(z))<<endl;
	//Program Terminate
	return 0;
	
	
}
