// Word Game

#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
int main()
{
	
	string name;
	string city;
	string college;
	string profession;
	string age;
	string Type_Animal;
	string Pet_Name;
	
	//Read Data from User
	cout<<"Enter Age"<<endl;
	getline(cin,age);
	cout<<"Enter Name "<<endl;
	getline(cin,name);
	cout<<"Enter College"<<endl;
	getline(cin,college);
	cout<<"Enter City"<<endl;
	getline(cin,city);
	cout<<"Enter Profession"<<endl;
	getline(cin,profession);
	cout<<"Enter Type of Animal"<<endl;
	getline(cin,Type_Animal);
	cout<<"Enter Pet Name"<<endl;
	getline(cin,Pet_Name);
	//Data Successfully Input
	cout<<"\n********************************\n";
	cout<<endl;
	
	
	
	
/*
There once was a person named NAME who lived in CITY . At the age of 
AGE, NAME went to college at COLLEGE. NAME graduated and went to work 
as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They 
both lived happily ever after!
*/
	
	cout<<"There once was a person named "<<name<<" who lived in the "<<city<<".At the age of "
	<<age<<", "<<name<<"went to college at "<<college<<". "<<name<<
	" graduated and went to work as a "<<profession<<". Then, "<<name<<" adopted a "<<
	Pet_Name<<" Animal named "<<Pet_Name<<". They both lived happily even after!"<<endl;
	return 0;	
	
}
