// Example 3
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	fstream dataFile;
	double num=17.816392;
	dataFile.open("numFile.txt",ios::out);  // Purana Data Sab Clear Agar File ho Gi
	
	dataFile<<fixed;   // Fixed Point Notattion
	dataFile<<num<<endl;
	
	
	dataFile<<setprecision(4)<<fixed;
	dataFile<<num<<endl;
	
	dataFile<<setprecision(3)<<fixed;
	dataFile<<num<<endl;
	
	dataFile<<setprecision(2)<<fixed;
	dataFile<<num<<endl;
	
	dataFile<<setprecision(1)<<fixed;
	dataFile<<num<<endl;
	
	dataFile.close();
	cout<<"Done"<<endl;	
	
	
	
}
