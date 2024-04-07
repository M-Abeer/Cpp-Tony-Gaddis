// Student Line Up

#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
	
	ifstream ifs;
	ifs.open("Name.txt");
	
	int i;
	int Students;
	string name;
	string first,last;
	if(ifs)
	{
		ifs>>name;
		first=last=name;	
	}
	
	
	while(ifs>>name)
	{		
		
		if(name<first)
			first=name;
		if(name>last)
			last=name;
	}
	cout<<"First Name is "<<first<<endl;
	cout<<"Last name is "<<last<<endl;
	
	ifs.close();
	// Program Terminate
	return 0;
}
