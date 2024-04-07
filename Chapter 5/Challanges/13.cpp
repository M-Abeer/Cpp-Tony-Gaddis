//// The Greatest and Smallest of these

#include<iostream>
#include<iomanip>
#include<stdlib.h>   // To Clear Screen This header File is used
using namespace std;
int main()
{
	int number;
	int high=0,low=0;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	
	// Use Sentinal 
	while(number!=99)
	{
		if(number>high)
			high=number;
		if(number<low)
			low=number;
			
		cout<<"Enter a Value"<<endl;
		cin>>number;
	}
	cout<<"Lowest Number is "<<low<<endl;
	cout<<"Highest Number is "<<high<<endl;
	
	system("cls");   // Function to Clear SCreen
	cout<<"Abeer"<<endl;
	
	// Proh\gram terminate
	return 0;
}
