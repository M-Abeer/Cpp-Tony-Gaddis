// CP 4.30
#include<iostream>
using namespace std;
int main()
{
	int num;
	
	// Display Menu
	cout<<"\t\t\t\tPROGRAM\n\n\n";
	
	cout<<"1. One"<<endl;
	cout<<"2. Two"<<endl;
	cout<<"3. Three"<<endl;
	cout<<"4. Error"<<endl;
	
	cout<<"Enter your Choice"<<endl;
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"One"<<endl;
			break;
		case 2:
			cout<<"Two"<<endl;
			break;
		case 3:
			cout<<"Three"<<endl;
			break;
		case 4:
			cout<<"Error"<<endl;
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
	// Program Terminate
	return 0;
	
}
