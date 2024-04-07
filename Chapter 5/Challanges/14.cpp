// Student Line Up

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i;
	int Students;
	string name;
	string first,last;
	
	cout<<"Enter Number of Students"<<endl;
	cin>>Students;
	
	cout<<"Enter Name of Student 1"<<endl;
	cin>>name;
	 
	first=last=name;
	//
	

	for(i=1;i<Students;i++)
	{
		cout<<"Enter Name of Student "<<(i+1)<<endl;
	//	getline(cin,name);
		cin>>name;	
				
		if(name<first)
			first=name;
		if(name>last)
			last=name;
	}
	cout<<"First Name is "<<first<<endl;
	cout<<"Last name is "<<last<<endl;
		
}
