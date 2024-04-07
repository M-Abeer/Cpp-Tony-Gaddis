// EXample 5.25

#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int value;
	
	cout<<"Enter a value"<<endl;
	cin>>value;
	
	char choice;
	
	for(int i=0;i<10;i++)
	{
		cout<<value<< " raised to the Power "<<(i+1)<<" is "<<pow(value,i)<<endl;
		cout<<"Enter Quit to Quit the proggram and any other key to COntinue"<<endl;
		cin>>choice;
		if(choice=='Q'||choice=='q')
		{
			break;
		}
	}
	
	
	// program termiante
	return 0;
	
	
	
	
	
	
	
	
	
	
}
