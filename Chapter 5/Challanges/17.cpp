// Sales Bar Chart

#include<iostream>
using namespace std;
int main()
{
	
	int Sales1,Sales2,Sales3,Sales4,Sales5;
	
	
	cout<<"Enter Sales of Day 1"<<endl;
	cin>>Sales1;
	cout<<"Enter Sales of Day 2"<<endl;
	cin>>Sales2;
	cout<<"Enter Sales of Day 3"<<endl;
	cin>>Sales3;
	cout<<"Enter Sales of Day 4"<<endl;
	cin>>Sales4;
	cout<<"Enter Sales of Day 5"<<endl;
	cin>>Sales5;
	
	
	int i;
	int a,b;
	
	b=Sales1/100;
	cout<<"Store 1 :";
	for(i=0;i<b;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"Store 2 :";
	b=Sales2/100;
	for(i=0;i<b;i++)
	{
	 cout<<"*";
	}
	cout<<endl;
	
	cout<<"Store 3 :";
	b=Sales3/100;
	for(i=0;i<b;i++)
	{
	 cout<<"*";
	}
	cout<<endl;
	
	cout<<"Store 4 :";
	b=Sales4/100;
	for(i=0;i<b;i++)
	{
	 cout<<"*";
	}
	cout<<endl;

	cout<<"Store 5 :";
	b=Sales5/100;
	for(i=0;i<b;i++)
	{
	 cout<<"*";
	}
	cout<<endl;
// Program terminaw
return 0;
	
}
