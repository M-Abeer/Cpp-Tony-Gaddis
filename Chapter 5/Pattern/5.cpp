/*
	*
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
        
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
			cout<<"*";
		}
		cout<<endl;
	}
		for(i=1;i<=rows-1;i++)
	{
		for(j=rows-1;j>=i;j--)
		{
			cout<<"*";
		}
		
	cout<<endl;
	}
	
	
	
	
	// program Terminate
	return 0;
}

