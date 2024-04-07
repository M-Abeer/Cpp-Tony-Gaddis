// Larger than n
#include<iostream>
using namespace std;

void display(int array[],int size, int n)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(array[i]>n)
		{
			cout<<"The Number Greater than "<<n<< " is ";
			cout<<array[i]<<endl;
		}
	}
}



int main()
{
	
	
	const int size=10;
	int array[size];
	int n;
	
	// Read Data from User
	for(int i=0;i<size;i++)
	{
		cout<<"Element #"<<(i+1)<<endl;
		cin>>array[i];
	}
	
	cout<<"Enter a Number"<<endl;
	cin>>n;
	
	display(array,size,n);
	
	//Program Terminte
	return 0;
}
