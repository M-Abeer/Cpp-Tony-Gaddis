// Customer Account
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<fstream>


struct Data
{
	int id;
	string name;
	string address;
	string city;
	string state;
	string zip;
	string phone;
	double balance;
	double date_of_last_balance;
};

int main()
{
	ofstream ofs;
	ofs.open("Customer.txt");
	Data d[10];
	int i;
	int choice;
	
	
	// Display the MEnu
	cout<<endl;
	cout<<"\t\t\tCUSTOMER ACCOUNT\n";
	cout<<"1. Enter Data "<<endl;
	cout<<"2. Change Data "<<endl;
	cout<<"3. Display Data "<<endl;
	cout<<"4. Quit "<<endl;
	
	cout<<"Enter Your Selection "<<endl;
	cin>>choice;
	
	
	if(choice==1)
	{
		cout<<"Enter Data "<<endl;
		// Read Data from User
	for(i=0;i<2;i++)
	{
		cout<<"Enter Account ID"<<endl;  // Additional
		cin>>d[i].id;
		ofs<<d[i].id<<endl;
		cout<<"Enter name "<<endl;
		cin.ignore();
		getline(cin,d[i].name);
		ofs<<d[i].name<<endl;
		cout<<"Enter Address "<<endl;
		getline(cin,d[i].address);
		ofs<<d[i].address<<endl;
		cout<<"Enter City "<<endl;
		getline(cin,d[i].city);
		ofs<<d[i].city<<endl;
		cout<<"Enter State "<<endl;
		getline(cin,d[i].state);
		ofs<<d[i].state<<endl;
		cout<<"Enter ZIP "<<endl;
		getline(cin,d[i].zip);
		ofs<<d[i].zip<<endl;
		cout<<"Enter Telephone "<<endl;
		getline(cin,d[i].phone);
		ofs<<d[i].phone<<endl;
		cout<<"Enter Account Balance "<<endl;
		cin>>d[i].balance;
		ofs<<d[i].balance<<endl;
		cout<<"Day of Last Payment "<<endl;
		cin>>d[i].date_of_last_balance;
		ofs<<d[i].date_of_last_balance<<endl;
	}	
	
	
	
	else if(choice==2)
	{
		int Id;
		ifstream ifs;
		ifs.open("Customer.txt");
		ofstream ofs;
		ofs.open("temp.txt");
		cout<<"ENter ID whose ID is to be CHanged "<<endl;
		cin>>Id;
		for(i=0;i<2;i++)
		{
			if(Id==d[i].id)
			{
				cout<<"Enter Data of Employee "<<endl;
				
				
				
				
				
				
				
			}
		}
		
	}
	
}
