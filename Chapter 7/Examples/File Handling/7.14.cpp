// Example 7.14
#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	const int ARRAY_SIZE=100;
	int numbers[ARRAY_SIZE];
	int count=0;
	ifstream ifs;
	ifs.open("Partial.txt");
	int i;
	/*
	for(count=0;count<ARRAY_SIZE;count++)
	{
		ifs>>numbers[count];
		count++;
	}*/
	while(count<ARRAY_SIZE&&ifs>>numbers[count])
		count++;
	
	// CLose the File
	ifs.close();
	// Display
	for(int i=0;i<count;i++)
	{
		cout<<numbers[i]<<endl;
	}
	// Program Terminate
	return 0;
}
