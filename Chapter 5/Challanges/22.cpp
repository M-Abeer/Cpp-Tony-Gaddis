// Sqaure Display
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int rows;
	cout<<"\t\t\tSQAURE\n\n";
	cout<<"Enter Number of Rows"<<endl;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			cout<<"X";
		}
		cout<<endl;
	}
	
	// Program Terminate
	return 0;
}
