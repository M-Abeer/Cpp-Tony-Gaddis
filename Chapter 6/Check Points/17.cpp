// CP 6.17
#include<iostream>
using namespace std;
// Function ProtoType
void myFun();
int main()
{
	int var=100;
	cout<<var<<endl;
	myFun();
	cout<<var<<endl;
	return 0;
}

void myFun()
{
	int var=50;
	cout<<var<<endl;
}
