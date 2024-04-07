// 23
// Pattern A
#include<iostream>
using namespace std;
int main()
{
	int i,j,rows;
	cout<<"Enter Number of Rows"<<endl;
	cin>>rows;
	cout<<"\t\tPATTERN A\n\n";
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"+";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"\t\tPATTERN B\n\n";
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{
			cout<<"+";
		}
		cout<<endl;
	}
	// Program terminate
	return 0;
}
