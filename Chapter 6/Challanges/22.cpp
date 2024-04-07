// isPrime Function

#include<iostream>
using namespace std;
bool isPrime(int);

int main()
{
	int number;
	int x;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	
	cout<<"The number is "<<(isPrime(number)?"Prime":"Not Prime");
	// Program terminate
	return 0;
}

bool isPrime(int number)
{
	int isPrime=0 ;
	
		
	for(int i = 1 ; i <= number; i++)
	{
		if(number % i == 0)
		{
			isPrime++;						
		}
		return isPrime==2 ? 1: 0;  // 1 for true and 0 for false
	}

}
