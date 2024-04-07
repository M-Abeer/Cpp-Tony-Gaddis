// How Many Pizzas?
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>

int main()
{
	double Diameter;		// 
	float Radius;			//
	const float Area_of_Slice=14.125;	//
	const int Slices_Per_Person=4;		//
	double No_of_Pizzas;    //
	int No_of_People;		//
	float Slices_Needed;	//
	float No_of_Slices;		//
	const float PI=3.14159; //
	double Area_of_Slices;  //
	
	
	//Read Data From User
	cout<<"Enter Number of People who Attend the Party"<<endl;
	cin>>No_of_People;
	cout<<"Enter Diameter of Pizza"<<endl;
	cin>>Diameter;
	
	
	// Calculations
	Slices_Needed=No_of_People*Slices_Per_Person;
	Radius=Diameter/2;
	Area_of_Slices=PI*Radius*Radius;
	No_of_Slices=Area_of_Slices/Area_of_Slice;
	No_of_Pizzas=Slices_Needed/No_of_Slices;
	
	
	//Display report
	cout<<"Number of People are "<<No_of_People<<endl;
	cout<<"Number of Slices "<<No_of_Slices<<endl;
	cout<<"Number of Pizzas that are Needed "<<No_of_Pizzas<<endl;
	
	
	//Program Terminate
	return 0;
	
	
}
