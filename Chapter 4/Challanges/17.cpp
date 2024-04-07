// Personal Best
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string name1,name2,name3;
	int date1,date2,date3;
	float height1,height2,height3;
	
	// Read data from User
	cout<<"Enter Name 1 Name 2 Name 3"<<endl;
	cin>>name1>>name2>>name3;
	
	cout<<"Enter Date 1 Date 2 Date 3"<<endl;
	cin>>date1>>date2>>date3;
	
	cout<<"Enter their Heights"<<endl;
	cin>>height1>>height2>>height3;
	
	//
	if(height1<2&&height1>5||height2<2&&height2>5||height3<2&&height3>5)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		
	
	
	if(height1>height2)
	{
		if(height1>height3)
		{
			cout<<name1<<endl<<date1<<endl<<height1<<endl;
			if(height2>height3)
			{
				cout<<name2<<endl<<date2<<endl<<height2<<endl;
				cout<<name3<<endl<<date3<<endl<<height3<<endl;
			}
			else
			{
				cout<<name3<<endl<<date3<<endl<<height3<<endl;
				cout<<name2<<endl<<date2<<endl<<height2<<endl;
			}
		}
	}
	
	if(height2>height1)
	{
		if(height2>height3)
		{
			cout<<name2<<endl<<date2<<endl<<height2<<endl;
			if(height1>height3)
			{
				cout<<name1<<endl<<date1<<endl<<height1<<endl;
				cout<<name3<<endl<<date3<<endl<<height3<<endl;
			}
			else
			{
				cout<<name3<<endl<<date3<<endl<<height3<<endl;
				cout<<name1<<endl<<date1<<endl<<height1<<endl;
			}
		}
	}
	
	
	
	if(height3>height1)
	{
		if(height3>height2)
		{
			cout<<name3<<endl<<date3<<endl<<height3<<endl;
			if(height1>height2)
			{
				cout<<name1<<endl<<date1<<endl<<height1<<endl;
				cout<<name2<<endl<<date2<<endl<<height2<<endl;
			}
			else
			{
				
				cout<<name2<<endl<<date2<<endl<<height2<<endl;
				cout<<name1<<endl<<date1<<endl<<height1<<endl;
			}
		}
	}
	
	}
	
	// Program terminate
	return 0;
}
