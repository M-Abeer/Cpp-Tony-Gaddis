// Example 12.15
#include<iostream>
#include<fstream>
using namespace std;

// Array Size
const int NAME_SIZE=51,ADDR_SIZE=51,PHONE_SIZE=14;

// Decalre Structure for Record
struct Info
{
	char name[NAME_SIZE];
	int age;
	char address1[ADDR_SIZE];
	char address2[ADDR_SIZE];
	char phone[PHONE_SIZE];
};


int main()
{
	
	Info person;
	fstream people;
	char ch;
	
	people.open("people.dat",ios::binary|ios::out);
	do
	{
		
	
		// Write Data on File in Binary Mode
		//Write Data on File
		cout<<"Enter Data of Person"<<endl;
		cout<<"Name :"<<endl;
		cin.getline(person.name,NAME_SIZE);
		cout<<"Age :"<<endl;
		cin>>person.age;
		cin.ignore();
		cout<<"Address Line 1 :"<<endl;
		cin.getline(person.address1,ADDR_SIZE);
		cout<<"Address Line 2 :"<<endl;
		cin.getline(person.address2,ADDR_SIZE);
		cout<<"Phone :"<<endl;
		cin.getline(person.phone,PHONE_SIZE);
		people.write(reinterpret_cast<char*>(&person),sizeof(person));	


		cout<<"Do you want to Add Data of Another Person"<<endl;
		cin>>ch;
		cin.ignore();
		
	}while(ch=='Y'||ch=='y');
	cout<<"Data Successfully Written to the File"<<endl;
	people.close();
	
	
	
	
	// Program Termiinate
	return 0;
}


