// CP 5.12
#include<iostream>
using namespace std;
int main()
{
	int i,number,sum=0;
	for(i=1;i<=7;i++)
	{
		cout<<"Enter a Number"<<endl;
		cin>>number;
		sum=sum+number;
	}
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
