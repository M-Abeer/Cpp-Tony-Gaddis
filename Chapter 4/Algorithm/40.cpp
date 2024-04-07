// 40
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int choice;
	
	cout<<"Enter Choice"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<fixed<<showpoint<<setprecision(2)<<endl;
			break;
			
		case 2:
		case 3:
			cout<<fixed<<showpoint<<setprecision(4)<<endl;
			break;
		case 4:
			cout<<fixed<<showpoint<<setprecision(6)<<endl;
			break;
		default:
			cout<<fixed<<showpoint<<setprecision(8)<<endl;
			
	}
	//
	return 0;
	
}
