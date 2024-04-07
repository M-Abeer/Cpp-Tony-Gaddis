
// Customer Accounts
// Group Project
// 100 Percent OK
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


const int ch=30;

// Structure Declaration
struct Customer
{
	int Id;
	char Name[ch];
	char Address[ch];
	char City[ch];
	char State[ch];
	char Zip[ch];
	char Telephone[ch];
	double Account_Balance;
	double Date_of_Last_Payment;
};

// Function protoType

void AddData();
void DisplayData();// Specific Data  
void DeleteData();
void ModifyData();
void DisplayAllData();

// Main Start
int main()
{
	char ch;
	while(1)
	{
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"\t\t\tCUSTOMER ACCOUNT\n";
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"1. Add Data "<<endl;
		cout<<"2. Display Specific Data "<<endl;
		cout<<"3. Delete Data "<<endl;
		cout<<"4. Modify Data "<<endl;
		cout<<"5. Display All Data "<<endl;
		cout<<"6. Quit The Program "<<endl;
		cout<<"Enter Your Choice "<<endl;
		
		
		cin>>ch;
				
		if(ch=='1')
		{
			AddData();
		}
		else if(ch=='2')
		{
			DisplayData();
		}
		else if(ch=='3')
		{
			DeleteData();
		}
		else if(ch=='4')
		{
			ModifyData();
		}
		else if(ch=='5')
		{
			DisplayAllData();
		}
		else if(ch=='6')
		{
			break;
		}
		else
		{
			cout<<"Invalid Input "<<endl;
		}
		
	}	
	
	
	// Program terminate
	return 0;
	
}
// Main End


void AddData()
{
	
	Customer record;
	ofstream ofs;
	// Open File
	ofs.open("Customer.bin",ios_base::app);   // We can alse use ios::out|ios::binary
	// Read Data from User
	cout<<"Enter User Data "<<endl;
	cout<<"Enter ID "<<endl;
	cin>>record.Id;
	cin.ignore();
	cout<<"Name is "<<endl;
	cin.getline(record.Name,ch);
	cout<<"Address "<<endl;
	cin.get(record.Address,ch);
	cin.ignore();
	cout<<"City "<<endl;
	cin.getline(record.City,ch);
	cout<<"Enter State "<<endl;
	cin.getline(record.State,ch);
	cout<<"ENter Zip"<<endl;
	cin.getline(record.Zip,ch);
	cout<<"Enter Telephone Number "<<endl;
	cin>>record.Telephone;
	cout<<"Enter Account Balance "<<endl;
	cin>>record.Account_Balance;
	cout<<"Enter Date of Last Payment "<<endl;
	cin>>record.Date_of_Last_Payment;
	
	// Write Data to File
	ofs.write(reinterpret_cast<char*>(&record),sizeof(record));
	// File CLose
	ofs.close();
	cout<<"Data Successfully Written to the File "<<endl;
	
}

void DisplayData()
{
	
	Customer record;
	ifstream ifs;
	int i;
	// Enter id whose Data is to be Required
	cout<<"Enter ID of Customer whose Data is Rquired "<<endl;
	cin>>i;
	// Open File
	ifs.open("Customer.bin");
	while(ifs.read(reinterpret_cast<char*>(&record),sizeof(record)))
	{
		
		
		if(record.Id==i)
		{
			cout<<"The Data is "<<endl;
			cout<<"Id is "<<record.Id<<endl;
			cout<<"Name is "<<record.Name<<endl;
			cout<<"Address is "<<record.Address<<endl;
			cout<<"City is "<<record.City<<endl;
			cout<<"State is "<<record.State<<endl;
			cout<<"Zip is "<<record.Zip<<endl;
			cout<<"Telephone Number is "<<record.Telephone<<endl;
			cout<<"Account Balance is "<<record.Account_Balance<<endl;
			cout<<"Date of Last Payment "<<record.Date_of_Last_Payment<<endl;
			cout<<"Data Successfully Displayed"<<endl;
		}
		
		else
		{
			cout<<"Record Not Found "<<endl;
		}
		
	}
		// File CLosed
		// It will be outside the while
		ifs.close();
	
}

void DeleteData()
{
	Customer record;
	ifstream ifs("Customer.bin");
	ofstream ofs("temp.bin");
	int i;
	// Enter id whose Data is to be Delete
	cout<<"Enter Id Whose Data is to Be Deleted "<<endl;
	cin>>i;
	int n=0;
	// Read complete file
	while(ifs.read(reinterpret_cast<char*>(&record),sizeof(record)))
	{
		if(record.Id!=i)
		{
			ofs.write(reinterpret_cast<char*>(&record),sizeof(record));
			n++;
		}
		
		
	}
	// CLose both Files
	ofs.close();
	ifs.close();
	
	// Now Write Data to Original File
	if(n!=0)
	{
		
		ofstream ofs2("Customer.bin");
		ifstream ifs2("temp.bin");
		while(ifs2.read(reinterpret_cast<char*>(&record),sizeof(record)))
		{
			ofs2.write(reinterpret_cast<char*>(&record),sizeof(record));
		}
		ifs2.close();
		ofs2.close();
	}
	cout<<"Data Successfully Deleted "<<endl;
}

void ModifyData()
{
	int i;
	Customer record;
	cout<<"Enter Id Whose Data is to Be Modify "<<endl;
	cin>>i;
	ifstream ifs("Customer.bin");
	ofstream ofs("temp.bin");
	
	
	while(ifs.read(reinterpret_cast<char*>(&record),sizeof(record)))
		{
		
		if(record.Id==i)
		{
			cout<<"ENter New Data "<<endl;
			cout<<"Enter ID "<<endl;
			cin>>record.Id;
			cin.ignore();
			cout<<"Name is "<<endl;
			cin.getline(record.Name,ch);
	//		cin.ignore();
			cout<<"Address "<<endl;
			cin.get(record.Address,ch);
			cin.ignore();
			cout<<"City "<<endl;
			cin.getline(record.City,ch);
//			cin.ignore();
			cout<<"Enter State "<<endl;
			cin.getline(record.State,ch);
		//	cin.ignore();
			cout<<"ENter Zip"<<endl;
			cin.getline(record.Zip,ch);
	//		cin.ignore();
			cout<<"Enter Telephone Number "<<endl;
			cin>>record.Telephone;
			cout<<"Enter Account Balance "<<endl;
			cin>>record.Account_Balance;
			cout<<"Enter Date of Last Payment "<<endl;
			cin>>record.Date_of_Last_Payment;
			
		}
	
		ofs.write(reinterpret_cast<char*>(&record),sizeof(record));
		
		
	}
	ofs.close();
	ifs.close();
		// Now Write Data to Original File
	ofstream ofs2("Customer.bin");
	ifstream ifs2("temp.bin");
	while(ifs2.read(reinterpret_cast<char*>(&record),sizeof(record)))
	{
		ofs2.write(reinterpret_cast<char*>(&record),sizeof(record));
	}
	
	ofs2.close();
	ifs2.close();
	cout<<"Data Successfully Modified "<<endl;
}


void DisplayAllData()
{
	
	Customer record;
	ifstream ifs("Customer.bin");
	while(ifs.read(reinterpret_cast<char*>(&record),sizeof(record)))
	{
		
			cout<<"The Data is "<<endl;
			cout<<"Id is "<<record.Id<<endl;
			cout<<"Name is "<<record.Name<<endl;
			cout<<"Address is "<<record.Address<<endl;
			cout<<"City is "<<record.City<<endl;
			cout<<"State is "<<record.State<<endl;
			cout<<"Zip is "<<record.Zip<<endl;
			cout<<"Telephone Number is "<<record.Telephone<<endl;
			cout<<"Account Balance is "<<record.Account_Balance<<endl;
			cout<<"Date of Last Payment "<<record.Date_of_Last_Payment<<endl;
		
	}
	
	ifs.close();
	
}

// Instruction
//File CLose Statement will be Written Carfully After the While Loop not inWhile Loop
//
