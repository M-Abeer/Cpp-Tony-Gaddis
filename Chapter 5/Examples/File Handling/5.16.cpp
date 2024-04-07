// Example 5.16
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs;
	ofs.open("Demofile.txt");
	
	cout<<"Write data to File"<<endl;
	
	// Write data to File
	ofs<<"Abeer";
	ofs<<"Areeb";
	ofs<<"Ali";
	ofs<<"Saad";
	
	// Close the File
	ofs.close();
	//Program terminate
	return 0;
}
