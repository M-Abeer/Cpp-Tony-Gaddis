// Celcius to Farhenheit
#include<iostream>
using namespace std;
int main()
{
	float Celcius,Farhenheit;
	cout<<"Celcius\t\tFarhenheit"<<endl;
	for(Celcius=0;Celcius<=20;Celcius++)
	{
		Farhenheit=1.8*Celcius+32;
		cout<<Celcius<<"\t\t"<<Farhenheit<<endl;
	}
	return 0;
}
