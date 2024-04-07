// 45
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int Number;
	ifstream ifs;
	ifs.open("Number.txt");
	int i;
	for(i=0;i<=100;i++)
	{
		ifs>>Number;
		cout<<Number<<endl;
	}
	
	
	
	
}
