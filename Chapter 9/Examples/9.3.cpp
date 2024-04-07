// Example 9.3
#include<iostream>
using namespace std;
int main()
{
	int x=25;
	int *ptr;
	ptr=&x;
	
	// Use both x and ptr to dispay the Value of x
	cout<<"Here is the Valur of x Printed Twice.."<<endl;
	cout<<x<<endl;
	cout<<*ptr<<endl;
	
	*ptr=100;
	// Use both x and ptr to dispay the Value of x
	cout<<"Here is the Valur of x Printed Twice again"<<endl;
	cout<<x<<endl;
	cout<<*ptr<<endl;
	//Program Terminate
	return 0;
}
