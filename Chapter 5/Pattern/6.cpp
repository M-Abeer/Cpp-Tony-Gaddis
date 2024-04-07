// 6
/*
6.       *
        **
       ***
      ****
     *****
     
     */
     
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i+j)<=5)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	// Program terminate
	return 0;	
}
