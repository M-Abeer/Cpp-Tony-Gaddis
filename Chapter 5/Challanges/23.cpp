// isPrime Function

#include<iostream>
#include<fstream>
using namespace std;
bool isPrime(int);

int main()
{
	ofstream ofs;
	ofs.open("Prime.txt");
	int number;
	int x;
	
	int j;
	int isPrime=0 ;
	
	cout<<"Enter Number"<<endl;
	cin>>number;
	for(j=1;j<=number;j++)
	{
	
	for(int i = 1 ; i <= j; i++)
	{
		if(number % i == 0)
		{
			isPrime++;
			if(isPrime==2)
			{
				ofs<<isPrime;
			}				
		}
	if(isPrime==2)
	{
		cout<<"Prime"<<endl;
	}
	else
	{
		cout<<"Not a Prime"<<endl;
	}
	
	}
	}
	
	
	ofs.close();

	// Program terminate
	return 0;

}
