// Exaple 9.6
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=5;   //Size of Array
	int number[SIZE];  //Array of Integers
	int count; 			//Counter Variable
	
	// Read Data from User
	// Use Pointer Notation instead of subscripts
		cout<<"Enter Number"<<SIZE<<endl;
	for(count=0;count<SIZE;count++)
	{
		cin>>*(number+count);
	}
	
	
	//Display Using Pointer Notation
	cout<<"The Numbers are "<<endl;
	for(count=0;count<SIZE;count++)
	{
		cout<<*(number+count)<<"\t"<<endl;
	}
	
	
	//
	return 0;
}
