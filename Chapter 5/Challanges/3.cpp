// Ocean Level
#include<iostream>
using namespace std;
int main()
{
	int i;
	double Level;
	double rise=1.5;
	// Use for Loop
	cout<<"\n********************************\n";
	for(i=1;i<=25;i++)
	{
		Level=i*rise;
		cout<<"In Year "<<i<<" Ocean Level is "<<Level<<endl;
	}
	cout<<"\n********************************\n";
	return 0;
}
