//Celcius to Farhenheit

#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double Celcius,Farhenheit;
	//Read Data from User
	cout<<"Enter Value of Temperature in Celcius "<<endl;
	cin>>Celcius;
	Farhenheit=(1.8*Celcius)+32;
	//Dislay Report
	cout<<"Tmperature in Farhenheit is "<<Farhenheit<<endl;
	//Terminate Program
	return 0;
}
