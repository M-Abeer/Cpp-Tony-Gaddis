/*
4
	1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,rows;
	cout<<"Enter Number of Rows"<<endl;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	// Program terminate
	return 0;
}
