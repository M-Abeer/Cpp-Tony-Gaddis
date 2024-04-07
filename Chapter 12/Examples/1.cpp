// Example 1
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	fstream ofs;
	ofs.open("demoFile.txt",ios::out);  // Open for Output
	cout<<"Now Writing Data to the Data to the File"<<endl;
	
	ofs<<"Muhammad Abeer"<<endl;
	ofs<<"Muhammad Areeb"<<endl;
	ofs<<"Muhammad Ali"<<endl;
	ofs<<"Saad"<<endl;
	
	cout<<"Data SuccessFully Written"<<endl;
	//
	ofs.close();
	return 0;	
}
