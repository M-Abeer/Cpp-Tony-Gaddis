// Example 4.4
#include<iostream>
using namespace std;
int main()
{
	int a=1.5,b=1.5;
	a+=0.000000000000001;
	
	if(a==b)
	{
		cout<<"a and b both are same"<<endl;
	}
	else
	{
		cout<<"a and b are different"<<endl;
	}
	// Program Terminate
	return 0;
}

