// Example 7.5
#include<iostream>
using namespace std;

int main()
{
	char letter[10]={'A','B','C','D','E','F','G','H','I','J'};
	
	cout<<"Character\tASCII Code"<<endl;
	cout<<"---------\t----------\n";
	
	for(int i=0;i<10;i++)
	{
		cout<<letter[i]<<"\t\t";
		cout<<static_cast<int>(letter[i])<<endl;
	}
	//
	return 0;
}
