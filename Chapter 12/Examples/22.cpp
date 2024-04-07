// Example 12.22
#include<iostream>
#include<fstream>
using namespace std;

const int DESC_SIZE=31;

struct InventryItem
{
	char desc[DESC_SIZE];
	int qty;
	double price;
};

int main()
{
	
	InventryItem record;
	
	fstream inventry("Inventary.Data",ios::binary|ios::in);
	double recnum;
	
	// Get the Record Number
	cout<<"Which record do you want to edit?"<<endl;
	cin>>recnum;
	
	// Moving to record and Read it
	inventry.seekg(recnum*sizeof(record),ios::beg);
	inventry.read(reinterpret_cast<char*>(&record),sizeof(record));
	
	cout<<"Descriptipn is "<<record.desc<<endl;
	cin.ignore();
	cout<<"Quantity is "<<record.qty<<endl;
	cout<<"Price is "<<record.price<<endl;
	
	// Get the New Record data
	cout<<"Enter Description"<<endl;
	cin.getline(record.desc,DESC_SIZE);
	cout<<"Enter Quantity "<<endl;
	cin>>record.qty;
	cout<<"Enter Price "<<endl;
	cin>>record.price;
	
	inventry.seekp(recnum*sizeof(record),ios::beg);
	
	inventry.write(reinterpret_cast<char*>(&record),sizeof(record));
	//Close the File
	inventry.close();
	return 0;
}
