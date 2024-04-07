// Example 11.6
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

struct InventrySystem
{
	int partNum;
	string description;
	int onHand;
	double price;
};

void getItem(InventrySystem &);
void showItem(InventrySystem);

int main()
{
	InventrySystem part;
	getItem(part);
	showItem(part);
	
	// Program terminate
	return 0;
}

void getItem(InventrySystem &p)
{
	cout<<"Enter part Number "<<endl;
	cin>>p.partNum;
	cout<<"Enter the Part Description"<<endl;
	cin.ignore();
	getline(cin,p.description);
	cout<<"Enter the Quantity on Hand"<<endl;
	cin>>p.onHand;
	cout<<"Enter the Unit Price"<<endl;
	cin>>p.price;
}


void showItem(InventrySystem p)
{
	cout<<"Part Name is "<<p.partNum<<endl;
	cout<<"Description is "<<p.description<<endl;
	cout<<"Units on Hand is "<<p.onHand<<endl;
	cout<<"Price is "<<p.price<<endl;
}
