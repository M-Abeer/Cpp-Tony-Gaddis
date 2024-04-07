// Example 5.19
#include<iostream>
using namespace std;
#include<fstream>
#include<string>

int main()
{
	ifstream ifs;
	ifs.open("Friends.txt");
	
	string name;
	cout<<"Read data from File"<<endl;
	
	ifs>>name;  // Read Name 1
	cout<<name<<endl;
	
	ifs>>name;  // Read Name 2
	cout<<name<<endl;
	
	ifs>>name;  // Read Name 3
	cout<<name<<endl;
	
	ifs.close();
	// Program termiange
	return 0;
	
	
}
