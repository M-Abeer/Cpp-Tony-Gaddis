// Example 9.4
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int x=25,y=50,z=75;
	
	// Display the Contents of x y and z
	cout<<"Here are the Values of x y and z"<<endl;
	cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<endl;
	
	// Use Pointers to Manipulate
	ptr=&x;  // Store the Address of x in ptr
	*ptr+=100; // Add 100 in value x
	
	ptr=&y;  // Store the Address of y in ptr
	*ptr+=100; // Add 100 in value y
	
	
	ptr=&z;  // Store the Address of z in ptr
	*ptr+=100; // Add 100 in value x
	
	
	// Here again Display the Contents of x y and z
	cout<<"Here are the Values of x y and z"<<endl;
	cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<endl;
	
	// Program terminate
	return 0;
	
}
