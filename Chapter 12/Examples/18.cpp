// Example 12.18

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











long byteNum(int Num)
{
	return sizeof(Info)*Num;
}

void showRecord(Info record)
{
	cout<<"Name : "<<record.name<<endl;
	cout<<"Age : "<<record.age<<endl;
	cout<<"Address 1 : "<<record.address1<<endl;
	cout<<"Address 2 : "<<record.address2<<endl;
	cout<<"Phone : "<<record.phone<<endl;
}

int main()
{
		
	Info person;
	fstream people;
	
	// Open for Input Mode
	// Read
	people.open("people.dat",ios::binary|ios::in);
	// Test the Error
	if(!people)
	{
		cout<<"Error Opening thr File"<<endl;
		return 0;
	}
	
	
	// Read and Display record (Second Record)
	
	cout<<"Here is the Record "<<endl;
	people.seekg(byteNum(1),ios::beg);
	people.read(reinterpret_cast<char*>(&person),sizeof(person));
	showRecord(person);
	
	
	
	
	cout<<"Here is the Record "<<endl;
	people.seekg(byteNum(0),ios::beg);
	people.read(reinterpret_cast<char*>(&person),sizeof(person));
	showRecord(person);
	
	
	// CLose the File
	people.close();
	return 0;
	
	
	
	
}
