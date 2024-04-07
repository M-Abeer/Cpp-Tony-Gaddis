// Example 7.17
#include<iostream>
using namespace std;

void showValue(int number[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<number[i]<<endl;
	}
}

int main()
{
	const int Size=5;
	int number[Size]={1,2,3,4,5};
	
	showValue(number,Size);
	//
	return 0;
}
