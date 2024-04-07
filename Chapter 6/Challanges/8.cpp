// Coin Toss
#include<iostream>
using namespace std;
#include<cstdlib> // For rand and srand
#include<ctime>  // For the Time Function


void coinToss()
{
	int a;

	const int MAX_VALUE=2;
	const int MIN_VALUE=1;
	a=(rand()% (MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
	//b=(rand()% (MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
	
	if(a==MIN_VALUE)
	{
		cout<<"Heads"<<endl;
	}
	else if(a==MAX_VALUE)
	{
		cout<<"Tails"<<endl;
	}    
	
}
int main()
{
	int choice;
	
	// Get the System Time
	unsigned seed =time(0);
	
	// Random Number Generator
	srand(seed);
	
	cout<<"How many Times?"<<endl;
	cin>>choice;
	for(int i=0;i<choice;i++)
	{
		coinToss();
	}
	// Program terminate
	return 0;
}
	
