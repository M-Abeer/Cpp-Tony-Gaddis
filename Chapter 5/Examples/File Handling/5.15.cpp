// Exaple 7.15
#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;
// Write Data to File
int main()
{
	ofstream ofs;
	ofs.open("demoFile.txt");
	
	cout<<"Now Write data to File"<<endl;
	
	// Write Four Names to File
	ofs<<"Abeer\n";
	ofs<<"Areeb\n";
	ofs<<"Saad\n";
	ofs<<"Ali\n";
	
	// Closing The File
	ofs.close();
	cout<<"Done "<<endl;
	
	// Program terminate
	return 0;
}

