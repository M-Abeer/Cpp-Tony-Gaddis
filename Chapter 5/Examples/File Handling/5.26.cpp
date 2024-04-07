// EXample 5.26
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int count=1;
	int numDVDS;
	char current;
	double total=0;
	
	
	cout<<"Enter Number of DVDs"<<endl;
	cin>>numDVDS;
	
	
	for(int i=01;i<=numDVDS;i++)
	{
		if(i%3==0)
		{
			cout<<"DVD #"<<i<<" is Free!!"<<endl;
			continue;
		}
		cout<<"Is DVD #"<<i<<" a Currnt Release "<<endl;
		cin>>current;
		if(current=='Y'||current=='y')
		{
			total+=3.50;
		}
		else
		{
			total+=2.50;
		}
	}
	
	cout<<setprecision(2)<<fixed<<showpoint<<endl;
	cout<<"The Total price is "<<total<<endl;
	
	// program terminate
	return 0;
	
	
	
	
	
	
}
