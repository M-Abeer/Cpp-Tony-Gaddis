// Example 5.20
// Read Dat from text File NumericData

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("Number.txt");
	
	int value1,value2,value3;
	ifs>>value1;
	ifs>>value2;
	ifs>>value3;
	
	ifs.close();
	
	//
	cout<<"Number 1 is "<<value1<<"\tNumber 2 is "<<value2<<"\tNumber 3 is "<<value3<<endl;
	int sum;
	sum=value1+value2+value3;
	cout<<"The Sum is "<<sum<<endl;
	
	//
	return 0;
}
