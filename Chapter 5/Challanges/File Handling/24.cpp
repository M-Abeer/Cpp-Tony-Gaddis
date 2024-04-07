// Using FIles--Numeric Processing

#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	ifstream ifs;
	ifs.open("Random.txt");
	
	double total=0;
	int count=0;
	double average;
	int number;
	
	while(ifs>>number)
	{
		count++;
		total+=number;
	}
	average=total/count;
	
	
	// Display The Report
	
	cout<<"The Total Numbers Are "<<count<<endl;
	cout<<"Sum of All Numbers are "<<total<<endl;
	cout<<"Average is "<<average<<endl;
	
	// Program terminate
	return 0;
	
}
