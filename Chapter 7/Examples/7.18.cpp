// Example 7.18
#include<iostream>
using namespace std;

void showValue(int arg[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arg[i]<<endl;
	}
	cout<<endl;
}

int main()
{
	const int size=5;
	int set1[size]={1,2,3,4,5};
	int set2[size]={2,4,6,8,10};
	
	// Pass Set 1 to ShowValue
	showValue(set1,size);
	
	// Pass Set 2 to ShowValue
	showValue(set2,size);
	//Program Termiiate
	return 0;
}
