// Example 12.16
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
	
	//Open File
	people.open("people.dat",ios::binary|ios::in);
	/*
	if(!people)
	{
		cout<<"Error Opening File"<<endl;
	}*/
	
	
	people.read(reinterpret_cast<char*>(&person),sizeof(person));
	while(!people.eof())
	{
		cout<<"Name : "<<person.name<<endl;
		cout<<"Age : "<<person.age<<endl;
		cout<<"Address 1 : "<<person.address1<<endl;
		cout<<"Address 2 :"<<person.address2<<endl;
		cout<<"Phone : "<<person.phone<<endl;
		
		
		cout<<"Press any Key to Display Data of Next Student"<<endl;
		cin.get(ch);
		
		people.read(reinterpret_cast<char*>(&person),sizeof(person));
		
	}
	
	people.close();
	
	//
	return 0;
}
