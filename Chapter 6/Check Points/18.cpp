// CP 6.18
#include<iostream>
using namespace std;
//
void showvar();
int main()
{
	for(int count=0;count<10;count++)
	{
		showvar();
	}
	return 0;
}
void showvar()
{
	static int var=10;
	cout<<"Number is "<<var<<endl;
	var++;
}
