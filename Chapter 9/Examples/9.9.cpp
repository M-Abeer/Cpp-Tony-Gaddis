// Example 9.9
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=8;
	int set[SIZE]={5,10,15,20,25,30,35,40};
	int *ptr;
	int i;
	
	// Make ptr points to set Array
	ptr=set;
	
	
	//
	cout<<"The Numbers in set are "<<endl;
	for(i=0;i<SIZE;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
	
	
	//
	cout<<"The Number in set Backward are "<<endl;
	for(i=0;i<SIZE;i++)
	{
		ptr--;
		cout<<*ptr<<endl;
	}
	
	
	
	
	
}
