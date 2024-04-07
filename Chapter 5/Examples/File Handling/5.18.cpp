// EXample 5.18
#include<iostream>
#include<fstream>
using namespace std;
#include<string>

int main()
{
	ofstream ofs;
	ofs.open("Friends.txt");
	
	// Get Data from User
	string name1,name2,name3;
	
	cout<<"Enter Name of Friend 1"<<endl;
	getline(cin,name1);
	cout<<"Enter Name of Friend 2"<<endl;
	getline(cin,name2);
	cout<<"Enter Name of Friend 3"<<endl;
	getline(cin,name3);
	
	
	// Write data on File
	ofs<<name1<<endl;
	ofs<<name2<<endl;
	ofs<<name3<<endl;
	
	// Close the File
	ofs.close();
	
	// Program terminate
	return 0;
}
