// CP 4.31
#include<iostream>
using namespace std;
int main()
{
	int selection;
	
	cout<<"\t\t\t Which Formula do You want to See?\n\n"<<endl;
	cout<<"1. Area of Circle"<<endl;
	cout<<"2. Area of rectangle"<<endl;
	cout<<"3. Area of Cylinder"<<endl;
	cout<<"4. None of These"<<endl;
	
	cout<<"Enter your Selection"<<endl;
	cin>>selection;
	
	switch(selection)
	{
		case 1:
			cout<<"PI times Radius Square"<<endl;
			break;
		case 2:
			cout<<"Length Times Width"<<endl;
			break;
		case 3:
			cout<<"PI times radius square times height"<<endl;
			break;
		case 4:
			cout<<"Well ok!! Then Good Bye"<<endl;
			break;
		default:
			cout<<"You entered Wrong Input"<<endl;
			cout<<"Try Again"<<endl;
	}
	// Program Terminate
	return 0;
	
}
