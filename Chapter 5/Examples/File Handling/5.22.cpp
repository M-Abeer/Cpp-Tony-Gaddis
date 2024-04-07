// Example 5.22

#include<iostream>
#include<fstream>
using namespace std;;
int main()
{
	int number;
	ifstream ifs;
	ifs.open("List.txt");
	
	// Read The Number from the File
	// Also Display Them
	
	while(ifs>>number)
	{
		cout<<number<<endl;
	}
	
	ifs.close();
	
	// Program terminate
	return 0;
}
