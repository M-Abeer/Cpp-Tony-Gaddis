//++ and -- in Relational Operator
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	//if(x++>10)          //Statement will not Display
	if(++x>10)            //Statement will  Display
	{
		cout<<"x is greater than 10"<<endl;
	}
	return 0;
}
