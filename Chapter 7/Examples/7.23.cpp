// Example 7.23
// output not corect
#include<iostream>
using namespace std;

bool testPin(const int[],const int[],int);

int main()
{
	const int DIGIT=5;
	int pin1[DIGIT]={1,2,3,4,5};
	int pin2[DIGIT]={6,3,3,4,6};
	int pin3[DIGIT]={5,4,3,2,1};
	
	if(testPin(pin1,pin2,DIGIT))
	{
		cout<<"ERROR!! pin1 and pin 2 report to br Same"<<endl;
	}
	else
	{
		cout<<"Success!! pin1 and pin 2 report to be Different "<<endl;
	}
	
	if(testPin(pin1,pin3,DIGIT))
	{
		cout<<"ERROR!! pin1 and pin 3 report to br Same"<<endl;
	}
	else
	{
		cout<<"Success!! pin1 and pin 3 report to be Different "<<endl;
	}
	
	
	if(testPin(pin1,pin1,DIGIT))
	{
		cout<<"ERROR!! pin1 and pin 1 report to br Same"<<endl;
	}
	else
	{
		cout<<"Success!! pin1 and pin 1 report to be Different "<<endl;
	}
	
	
}

bool testPin(const int PIN1[],const int PIN2[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(PIN1[i]!=PIN2[i])
			return false;
		else
			return true;
	}
}
