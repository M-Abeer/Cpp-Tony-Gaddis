// 41
#include<iostream>
using namespace std;
int main()
{
	int name[20];
	int i;
	for(i=0;i<20;i++)
	{
		cout<<"Enter Element #"<<(i+1)<<endl;
		cin>>name[i];
	}
	
	// Display the Report
	cout<<"Elements are "<<endl;
	for(i=0;i<20;i++)
	{
		cout<<name[i]<<endl;
	}
	// Program terminate
	///Range Based for Loop is not working on this IDE............
	
	return 0;
}
