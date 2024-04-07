// Average Steps Calculator


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs;
	ifs.open("Steps.txt");
	int number;
	double total=0;
	double average=0;
	int i;
	for(int i=01;i<31;i++)
	{
		ifs>>number;
		total+=number;
		average=total/31;
	}
	cout<<"Total for Month 1 is "<<total<<endl;
	cout<<"Average is "<<average<<endl;
	
	// Also Do Same for Every Month

}
