// Random Number Guessing Game

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	// Get the System Time
	unsigned seed=time(0);
	// Random Number Generator
	srand(seed);
	int a,number;
	
	const int MAX=10;
	const int MIN=1;
	
	
	
	a=(rand()%(MAX-MIN+1)+MIN);
	cout<<a<<endl;
	cout<<"Guess which number it is??"<<endl;
	cin>>number;
	while(number!=a)
	{
	if(number>a)
	
	{
		cout<<"TooHigh!! Try Again"<<endl;
	}
	else if(number<a)
	{
		cout<<"Too Low!! Try Again"<<endl;
	}
	else if(number==a)
	{
		cout<<"Equal"<<endl;
	}
	
	cout<<"Enter Number Again"<<endl;
	cin>>number;
	
	}
	
	//Program terminate
	return 0;
	
}
