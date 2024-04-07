// Customer Accounts

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;


struct Data
{
	int id;
	string name;
	string address;
	string city;
	string state;
	string zip;
	string telephone;
	double account_balance;
	double date_of_last_payment;
};


void Add();
void Change();
void Display();


int main()
{
	int choice;
	
	while(true)
	{
		cout<<"\t\t\tCUSTOMER ACCOUNT\n\n";
		cout<<"1. Add Data "<<endl;
		cout<<"2. Change Data "<<endl;
		cout<<"3. Display Data "<<endl;
		cout<<"4. Exit "<<endl;
		
		cout<<"Enter Your Choice "<<endl;
		cin>>choice;
		
		if(choice==1)
		{
			cout<<"Add Data "<<endl;
			Add();
		}
		else if(choice==2)
		{
			cout<<"Change Data "<<endl;
			Change();
		}
		else if(choice==3)
		{
			cout<<"Display Data "<<endl;
			Display();
		}
		else if(choice==4)
		{
			cout<<"Exit the Program "<<endl;
			break;
		}
		else
		{
			cout<<"Invalid Input"<<endl;
		}
		
	}
	
	
	// Program Terminiate
	return 0;
}




void Add()
{
		Data d;
		
		cout<<"Enter Account ID"<<endl;  
		cin>>d.id;
		cin.ignore();
		cout<<"Enter name "<<endl;
		getline(cin,d.name);
		cout<<"Enter Address "<<endl;
		getline(cin,d.address);
		cout<<"Enter City "<<endl;
		getline(cin,d.city);
		cout<<"Enter State "<<endl;
		getline(cin,d.state);
		cout<<"Enter ZIP "<<endl;
		getline(cin,d.zip);
		cout<<"Enter Telephone "<<endl;
		getline(cin,d.telephone);
		cout<<"Enter Account Balance "<<endl;
		cin>>d.account_balance;
		cout<<"Day of Last Payment "<<endl;
		cin>>d.date_of_last_payment;

		// Open File
		ofstream ofs;
		ofs.open("Customer.bin",ios_base::app);
		ofs.write(reinterpret_cast<char*>(&d),sizeof(d));
		
		// CLose the File
		ofs.close();
		cout<<"Data Written on File"<<endl;
	
}






void Change()
{
	int id;
	Data d;
	ofstream ofs;
	ifstream ifs("Customer.bin");
	ofs.open("temp.bin");
	
	cout<<"Enter id of Customer whose Data is to be Changed "<<endl;
	cin>>id;
	
	if(id==d.id)
	{
		cout<<"Enter Data of Customer "<<endl;
		
		cout<<"Enter name "<<endl;
		getline(cin,d.name);
		cout<<"Enter Address "<<endl;
		getline(cin,d.address);
		cout<<"Enter City "<<endl;
		getline(cin,d.city);
		cout<<"Enter State "<<endl;
		getline(cin,d.state);
		cout<<"Enter ZIP "<<endl;
		getline(cin,d.zip);
		cout<<"Enter Telephone "<<endl;
		getline(cin,d.telephone);
		cout<<"Enter Account Balance "<<endl;
		cin>>d.account_balance;
		cout<<"Day of Last Payment "<<endl;
		cin>>d.date_of_last_payment;
	}
		// Write Data on File
		ofs.write(reinterpret_cast<char*>(&d),sizeof(d));
		ofs.close();
		ifs.close();

	// Now Modified Data is Written on Temp File
	// So Rewrite it on Customer File
		
		
		ifstream ifs2("temp.bin");
		ofstream ofs2("Customer.bin");
		
		
		
		while(ifs2.read(reinterpret_cast<char*>(&d),sizeof(d)))
		{
			ofs2.write(reinterpret_cast<char*>(&d),sizeof(d));
		}


		ifs2.close();
		ofs2.close();
		
}



void Display()
{
	Data d;
	
	ifstream ifs("Customer.bin");
	while(ifs.read(reinterpret_cast<char*>(&d),sizeof(d)))
	{
		cout<<"Id "<<d.id<<endl;
		cout<<"Name is "<<d.name<<endl;
		cout<<"Address is "<<d.address<<endl;
		cout<<"City is "<<d.city<<endl;
		cout<<"State is "<<d.state<<endl;
		cout<<"ZIP "<<d.zip<<endl;
		cout<<"Telephone Number "<<d.telephone<<endl;
		cout<<"Account Balance "<<d.account_balance<<endl;
		cout<<"Date of Last Payment "<<d.date_of_last_payment<<endl;
	}
	
	ifs.close();
	
}
