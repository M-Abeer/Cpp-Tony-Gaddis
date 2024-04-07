// 44
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs;
	ofs.open("Number.txt");
	int i;
	for(i=0;i<=100;i++)
	{
		ofs<<i<<endl;
	}
}
