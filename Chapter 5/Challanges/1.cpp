// Sum of Number
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int sum=0;
	cout<<"Enter Number"<<endl;
	cin>>n;
	while(n<0)
	{
		cout<<"You Entered an Incorrect Input"<<endl;
		cout<<"Enter a Correct Value"<<endl;
		cin>>n;
	}
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"The Sum is "<<sum<<endl;
	
	/*
	if(n>0)
	{
		for(i=0;i<=n;i++)
		{
			sum=sum+i;
		}
	cout<<"The sum is "<<sum<<endl;
	}
	else 
	{
		cout<<"Inavlid"<<endl;
	}
	*/
	
	
	// First Method is Recommended
	return 0;
}
