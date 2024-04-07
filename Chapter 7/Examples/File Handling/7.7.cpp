// Example 7.7
#include<iostream>
using namespace std;
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("TenNumbers.txt");
	int i;
	int number[10];
	
	for(i=0;i<10;i++)
	{
		ifs>>number[i];
	}
	
	// Display the report
	cout<<"Numbers are "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<number[i]<<endl;
	}
	
	ifs.close(); 
	// Program Terminate
	return 0;
}
