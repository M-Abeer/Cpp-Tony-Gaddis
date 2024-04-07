// CP 3.13
#include<iostream>
using namespace std;
int main()
{
	int int1,int2;
	int1=19,int2=2;
	double result;
	result=int1/int2;
	cout<<result<<endl;
	
	result=static_cast<double>(int1)/int2;
	cout<<result<<endl;
	
	result=static_cast<double>(int1/int2);
	cout<<result<<endl;
	
	//Program Terminate
	return 0;
}
