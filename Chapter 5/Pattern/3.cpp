/* 3
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
		for(j=rows;j>=i;j--)
		{
			cout<<"*";
		}
		
	cout<<endl;
	}
	// Program terminate
	return 0;
}
    
