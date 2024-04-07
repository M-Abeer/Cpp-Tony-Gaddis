//  Roman Numeral Converrtor
#include<iostream>
using namespace std;
int main()
{
	// Variable Definition
	int num;
	
	// Read Data from User
	cout<<"Enter  a Number"<<endl;
	cin>>num;
	
	// Use switch Statement
	switch(num)
	{
		case 1:
			cout<<"The Roman Numeral for "<<num<<" is I"<<endl;
			break;
		case 2:
			cout<<"The Roman Numeral for "<<num<<" is II"<<endl;
			break;
		case 3:
			cout<<"The Roman Numeral for "<<num<<" is III"<<endl;
			break;
		case 4:
			cout<<"The Roman Numeral for "<<num<<" is IV"<<endl;
			break;
		case 5:
			cout<<"The Roman Numeral for "<<num<<" is V"<<endl;
			break;
		case 6:
			cout<<"The Roman Numeral for "<<num<<" is VI"<<endl;
			break;
		case 7:
			cout<<"The Roman Numeral for "<<num<<" is VII"<<endl;
			break;
		case 8:
			cout<<"The Roman Numeral for "<<num<<" is VIII"<<endl;
			break;
		case 9:
			cout<<"The Roman Numeral for "<<num<<" is IX"<<endl;
			break;
		case 10:
			cout<<"The Roman Numeral for "<<num<<" is X"<<endl;
			break;
		default:
			cout<<"Invalid Input!! Sorry Try Again"<<endl;
			
	}
	// Program Terminate
	return 0;
}
