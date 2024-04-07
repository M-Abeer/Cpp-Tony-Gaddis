// Example 7.19
#include<iostream>
using namespace std;

void showArray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<endl;
}

void doubleArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]*2<<endl;
	}

}


int main()
{
	const int Size=5;
	int array[Size]={1,2,3,4,5};
	
	showArray(array,Size);
	doubleArray(array,Size);
	//
	
	showArray(array,Size);
	return 0;
}


