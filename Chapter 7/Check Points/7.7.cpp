// CP 7.7
#include<iostream>
using namespace std;
int main()
{
	int fish[20];
	
	int count=0;
	
	for(int i=0;i<20;i++)
	{
		cout<<"Fisherman "<<(i+1)<<endl;
		cin>>fish[i];
		cout<<"Fisherman "<<(i+1)<<" caught "<<fish[i]<<" fishes"<<endl;
	}
	return 0;
}
