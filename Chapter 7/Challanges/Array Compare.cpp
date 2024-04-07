// Array Compare
#include<iostream>
using namespace std;
int main()
{
	int array1[5];
	int array2[5];
	
	// Read Data from User
	cout<<"Enter Data of Array 1"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>array1[i];
	}
	cout<<"Enter Data of Array 2 "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>array2[i];
	}
	
	// Compare
	for(int i=0;i<5;i++)
	{
		if(array1[i]==array2[i])
		{
			cout<<"Element "<<(i+1)<<" of both Array is Same "<<endl;
		}
		else
		{
			cout<<"Element "<<(i+1)<<" of both Array is Same "<<endl;
		}
	}
	
	// Program terminate
	return 0;
}
