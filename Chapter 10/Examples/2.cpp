// Example 10.2
#include<iostream>
#include<iostream>
#include<cctype>

using namespace std;

bool testNum(char[], int );

int main()
{
	const int SIZE=8;
	char customer[SIZE];
	
	 cout<<"Enter the Customer Number"<<endl; 
	 cout<<"In Form LLLNNNN\n";  // One Additional is for \0
	 cin.get(customer,SIZE);
	 
	 if(testNum(customer,SIZE))
	 {
	 	cout<<"It is valid Number Format"<<endl;
	 }
	 else
	 {
	 	cout<<"it is Not a Correct Format"<<endl;
	 }
	 // Program terminate
	 return 0;
}


bool testNum(char ch[8],int size)
{
	
	int i;
	for(i=0;i<3;i++)
	{
		if(!isalpha(ch[i]))
		{
			return false;
		}
	}
	for(i=3;i<7;i++)
	{
		if(!isdigit(ch[i]))
		{
			return false;
		}
	}
	
	
		return true;
		
}
