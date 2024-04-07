// Ajeeb Pattern
#include<iostream>
using namespace std;
int main()
{
	int i,j,mid;
	mid=7/2+1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==mid||j==mid||(i==1&&j>=mid)||(j==1&&i<=mid)||(i==7&&j<=mid)||(j==7&&i>=mid))
			{
				cout<<"* ";
			}
			else
			{
				cout<<" ";
			}
		}
	cout<<endl;
	}
}
