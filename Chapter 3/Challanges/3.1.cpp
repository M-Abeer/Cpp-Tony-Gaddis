//Miles per Gallon
#include<iostream>
using namespace std;
int main()
{
	float No_of_Gallons;
	float No_of_Miles;
	//Calculate Car Gas Milage
	double Car_Gas_Milage;
	cout<<"Enter Number of Gallons"<<endl;
	cin>>No_of_Gallons;
	cout<<"Enter Number of Miles"<<endl;
	cin>>No_of_Miles; 
	Car_Gas_Milage=No_of_Miles/No_of_Gallons;
	cout<<"\n___________\n";
	cout<<"Car Gas Milage is "<<Car_Gas_Milage<<endl;
	return 0;
}


/*

#include <iostream>
using namespace std;

int main()
{
    // Variables
    float num_of_gallons,
          full_tank_miles,
          MPG;
    
    // Ask user for num of gallons
    cout << endl;
    cout << "Enter number of gallons the car can hold: ";
    cin >> num_of_gallons;
    
    // Ask for num of miles car can drive on full tank
    cout << "Enter a number of miles the car can be \n";
    cout << "driven on a full tank of gas: ";
    cin >> full_tank_miles;
    
    // Calculate num of miles the car can drive per gallon
    MPG = full_tank_miles / num_of_gallons;
    
    // Display calculation
    cout << "The car gets " << MPG << " miles per gallon.";
    cout << '\n' << endl;
    return 0;
}*/
