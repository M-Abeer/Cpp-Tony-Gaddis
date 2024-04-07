// Example 7.16
// Single Single Element Passing

#include<iostream>
using namespace std;

void showValue(int num)
{
	cout<<num<<endl;
}
int main()
{
	int number[8]={1,2,3,4,5,6,7,8};
	int i;
	
	for(i=0;i<8;i++)
	{
		showValue(number[i]);
	}
	//
	return 0;
}
