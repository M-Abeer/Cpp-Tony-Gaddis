// CP 7.10
#include<iostream>
using namespace std;
int main()
{
	int values[]={2,6,10,14};
	int x;
	//A
	cout<<values[2]<<endl;
	//B
	cout<<++values[0]<<endl;
	//C
	cout<<values[1]++<<endl;
	//D
	x=2;
	cout<<values[++x]<<endl;
}
