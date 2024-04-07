// Days in months
#include<iostream>
using namespace std;
int main()
{
	int month;
	int year;
	int days;
	
	// Read data
	cout<<"Enter Month form 1 to 12"<<endl;
	cin>>month;
	cout<<"Enter Year"<<endl;
	cin>>year;
	
	if(month==1)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	
	
	else if(month==3)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==4)
	{
		days=30;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==5)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==6)
	{
		days=30;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==7)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==8)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==9)
	{
		days=30;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==10)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==11)
	{
		days=30;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==12)
	{
		days=31;
		cout<<"Days are "<<days<<endl;
	}
	
	else if(month==2)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				days=29;
				cout<<"Days are "<<days<<endl;
			}
			else
			{
				days=28;
				cout<<"Days are "<<days<<endl;
			}
		}
		else if(year%100!=0)
		{
			if(year%4==0)
			{
				days=29;
				cout<<"Days are "<<days<<endl;
			}
			else
			{
				days=28;
				cout<<"Days are "<<days<<endl;
			}
		}
	}
	
	// Program terminate
	return 0;	

}
