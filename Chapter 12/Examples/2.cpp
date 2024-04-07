// Example 2
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream ofs;
	ofs.open("demoFile.txt",ios::out);
	cout<<"Enter data to File"<<endl;
	ofs<<"Ali\n";
	ofs<<"Abeer\n";
	ofs.close();
	
	// Reopen the File
	
	//Opening the File Again
	ofs.open("demoFile.txt",ios::app);
	
	// Append Mode
	//Append Data at the End
	
	ofs<<"Areeb\n";
	ofs<<"Usama\n";
	ofs<<"Asad\n";
	ofs.close();
	
	//
	return 0;
}
