// Example 5.10
#include<iostream>
using namespace std;
int main()
{
	int min,max,num;
	cout<<"Enter Minimum Number"<<endl;
	cin>>min;
	cout<<"Enter Maximum Number"<<endl;
	cin>>max;
	cout<<"Number Number Squared"<<endl;
	cout<<"\n******************\n"<<endl;
	for(num=min;num<=max;num++)
	{
		cout<<num<<"\t\t"<<(num*num)<<endl;
	}
	return 0;
}
