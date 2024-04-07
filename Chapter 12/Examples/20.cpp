// Example 12.10
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
	InventryItem inv={"",0,0.0};
	
	//Open theFile for Binary 
	fstream inventry("Inventary.data",ios::out|ios::binary);
	
	for(int i=0;i<NUM_RECORDS;i++)
	{
		cout<<"Now Writing Reecord of "<<(i+1)<<endl;
		inventry.write(reinterpret_cast<char*>(&inv),sizeof(inv));
				
	}
	
	// Close the File
	inventry.close();
	return 0;
}
