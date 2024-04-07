// Example 9.3
#include<iostream>
using namespace std;
int main()
{
	int x=15;
//	int *ptr=nullptr; // Pointer Variable can point to an int // Nhi chal rha Yar
	int *ptr;
	ptr=&x;
	cout<<"The Value of x is "<<x<<endl;
	cout<<"The address of x is "<<ptr<<endl;
	//Program Terminate
	return 0;
}
