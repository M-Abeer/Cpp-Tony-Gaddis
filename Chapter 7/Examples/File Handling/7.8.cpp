// Example 7.8
#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream ofs;
	ofs.open("Numbers.txt");
	int i;
	int number[10];
	
	// Read Data from User
	for(i=0;i<10;i++)
	{
		cout<<"Enter Element #"<<(i+1)<<endl;
		cin>>number[i];
	}
	
	// Now write Data on File
	for(i=0;i<10;i++)
	{
		ofs<<number[i]<<endl;
	}
	
	ofs.close();
	//Program terminate
	return 0;
	
}
