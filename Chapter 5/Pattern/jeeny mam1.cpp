/*
1
2 3
4 5 6 
7 8 9 10
*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	int j,number=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<number;
			number++;
		}
		cout<<endl;
	}
	// Program terminate
	return 0;
}
