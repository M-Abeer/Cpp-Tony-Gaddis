// 46
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int Number;
	ifstream ifs;
	ifs.open("Number.txt");
	int i;
	int total=0;
	for(i=0;i<=100;i++)
	{
		ifs>>Number;
		total+=Number;
		cout<<Number<<endl;
	}
	
	cout<<"Total is "<<total<<endl;
	
	
}
