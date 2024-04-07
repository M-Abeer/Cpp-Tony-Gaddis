// Example 12.21

#include<iostream>
#include<fstream>
using namespace std;

const int DESC_SIZE=31;
const int NUM_RECORDS=5;

//Declarartion of Structure
struct InventryItem
{
	char desc[DESC_SIZE];
	int qty;
	double price;
};


int main()
{
	fstream inventry("Inventary.data",ios::binary|ios::in);
	InventryItem inv;
	
	inventry.read(reinterpret_cast<char*>(&inv),sizeof(inv));	
	while(!inventry.eof())
	{
		cout<<"Description : "<<inv.desc<<endl;
		cout<<"Quantity : "<<inv.qty<<endl;
		cout<<"Price : "<<inv.price<<endl;
		
		inventry.read(reinterpret_cast<char*>(&inv),sizeof(inv));	
		
	}
	
	
	inventry.close();
}
