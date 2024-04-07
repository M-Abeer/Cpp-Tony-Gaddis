// Check Points 2
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	int SIZE=4;
	char big[SIZE];
	cout<<"Enter it"<<endl;
	cin.getline(big,SIZE);
	char little[SIZE];
	
	int i;
	for(i=0;i<4;i++)
	{
		little[i]=toupper(big[i]);
	}
	cout<<little;
	// Program Terminate
	return 0;
}
