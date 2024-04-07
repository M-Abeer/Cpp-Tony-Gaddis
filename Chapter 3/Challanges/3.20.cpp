
// Pizza pi
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double Diameter;
	double No_of_Slices;
	
	const double Area=14.125;
	double Area_of_Pizza;
	const double pi=3.14159;
	double Radius;
	
	//Read Data from User
	cout<<"Enter Diamrter "<<endl;
	cin>>Diameter;
	
	//Caluclate Area of pizza
	Radius=Diameter/2;
	Area_of_Pizza=pi*Radius*Radius;//We can also use pow function...
	
	//Calculate Number of Slices
	No_of_Slices=Area_of_Pizza/Area;
	//Display Report
	cout<<endl;
	cout<<"\n******************\n";
	cout<<setprecision(1)<<fixed<<endl;
	cout<<"Number of Slices are "<<No_of_Slices<<endl;
	cout<<"\n*****************\n";
	//Program Terminate
	return 0;
}


