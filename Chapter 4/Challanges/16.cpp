// Running the Race
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string name1,name2,name3;
	int Time1,Time2,Time3;
	
	// Read Data from User
	cout<<"Enter Name1 "<<endl;
	getline(cin,name1);
	cout<<"Enter Name2 "<<endl;
	getline(cin,name2);
	cout<<"Enter Name3 "<<endl;
	getline(cin,name3);
	
	
	cout<<"Enter Time 1, Time 2, Time 3"<<endl;
	cin>>Time1>>Time2>>Time3;
	
	if(Time1<0||Time2<0||Time3<0)
	{
		cout<<"Sorry";
	}
	else
	{
		
	if(Time1>Time2)
	{
		if(Time1>Time3)
		{
			cout<<name1<<endl;
			
			if(Time2>Time3)
			{
				cout<<name2<<endl;
				cout<<name3<<endl;
			}
			else
			{
				cout<<name3<<endl;
				cout<<name2<<endl;
			}
		}
	}
	
	if(Time2>Time1)
	{
		if(Time2>Time3)
		{
			cout<<name2<<endl;
			
				if(Time1>Time3)
				{
					cout<<name1<<endl;
					cout<<name3<<endl;
				}
				else
				{
					cout<<name3<<endl;
					cout<<name1<<endl;
				}
			
		}
	}
	
	
	
	if(Time3>Time1)	
	{
		if(Time3>Time2)
		{
			cout<<name3<<endl;
			if(Time1>Time2)
			{
				cout<<name1<<endl;
				cout<<name2<<endl;
			}
			else
			{
				cout<<name2<<endl;
				cout<<name1<<endl;
			}
		}
	}	
}

// Program Terminate
return 0;	

}
