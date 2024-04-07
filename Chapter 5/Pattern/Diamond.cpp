/* Diamond

        *
       ***
      *****
     *******
    *********
	 *******
      *****
       ***
        *

*/

#include<iostream>
using namespace std;
int main()
{
	int i,s,j,r;
	cout<<"Pattern Like DIAMOND"<<endl;
	cout<<"Enter Number of Rows of Upper"<<endl;
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(s=1;s<=(r-i);s++)
		{
			cout<<" ";
		}
			for(j=1;j<=((2*i)-1);j++)
			{
				cout<<"*";
			}
		cout<<endl;
		
	}
	
	
	
		for(i=5-1;i>=1;i--)
		{
			for(s=1;s<=5-i;s++)
			{
				cout<<" ";
			}
			for(j=1;j<=2*i-1;j++)
			{
				cout<<"*";
			}
		cout<<endl;
	}
 	
	
//Program terminate
return 0;
}
