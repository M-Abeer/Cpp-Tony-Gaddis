// ++ and -- in Mathematical Operator
#include<iostream>
using namespace std;
int main()
{
	int a=2,b=5;
	int c;
	c=a*b++;        //2 6 10
	//c=a*++b;      //2 6 12
	cout<<a<<"  "<<b<<"  "<<c;
	return 0;
}
