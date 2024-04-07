// EXaple 5.17
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs;
	ofs.open("Number.txt");
	
	// Get Three Number From User
	int num1,num2,num3;
	cout<<"Enter Number 1"<<endl;
	cin>>num1;
	cout<<"Enter Number 2"<<endl;
	cin>>num2;
	cout<<"Enter Number 3"<<endl;
	cin>>num3;
	
	// Write These Numbers to File
	ofs<<num1<<endl;
	ofs<<num2<<endl;
	ofs<<num3<<endl;
	
	cout<<"Numbers Are Saved to File"<<endl;
	
	// Close The File
	ofs.close();
	// Program Terminate
	return 0;
}
