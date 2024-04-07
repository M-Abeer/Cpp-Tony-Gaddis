// Example 11.5
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

struct Date
{
	int month;
	int day;
	int year;
};

struct Place
{
	string address;
	string city;
	string state;
	string zip;
};

struct EmployeeInfo
{
	string name;
	int employeeNum;
	Date birthDate;			// Nested Structure
	Place residence;         //Nested Structure
};

int main()
{
	EmployeeInfo e;
	// Get the Employee Name and Number
	cout<<"Enter Employee Name"<<endl;
	getline(cin,e.name);
	cout<<"Enter Employee Number"<<endl;
	cin>>e.employeeNum;
	
	// Get the Employee Birth date
	cout<<"Enter the Month"<<endl;
	cin>>e.birthDate.month;
	cout<<"Enter the Day"<<endl;
	cin>>e.birthDate.day;
	cout<<"Enter the Year"<<endl;
	cin>>e.birthDate.year;
	cin.ignore();
	
	
	// Get the Employee Address
	cout<<"Enter Street Address "<<endl;
	getline(cin,e.residence.address);
	cout<<"Enter City"<<endl;
	getline(cin,e.residence.city);
	cout<<"Enter State"<<endl;
	getline(cin,e.residence.state);
	cout<<"Enter Zip"<<endl;
	getline(cin,e.residence.zip);
	
	
	
	// Display the Info
	cout<<"\t\tHere is the Manager's Information\n"<<endl;
	cout<<e.name<<endl;
	cout<<"Employee Number "<<e.employeeNum<<endl;
	cout<<"Date of Birth  ";
	cout<<e.birthDate.day<<"-"<<e.birthDate.month<<"-"<<e.birthDate.year<<endl;
	cout<<"Place of Resistance"<<endl;
	cout<<e.residence.address<<endl;
	cout<<e.residence.city<<endl;
	cout<<e.residence.state<<endl;
	cout<<e.residence.zip<<endl;
	
	// Program Terminate
	return 0;
}
