//  Math tutor
#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
	// Get the System time
	unsigned seed=time(0);
	// Random Number Generator
	srand(seed);
	
	int a,b;
	a=rand();
	b=rand();
	
	
	int choice;
	
	// Display the Menu
	do
	{
		cout<<"\t\t\tMATHEMATICS\n\n";
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtraction"<<endl;
		cout<<"3. Multiplication"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Quit the Program"<<endl;
		cout<<"Enter your Choice"<<endl;
		cin>>choice;
		
		if(choice==1)
		{
			int c=a+b;
			cout<<"   "<<a<<endl;
			cout<<"   "<<b<<endl;
			cout<<"  +"<<c<<endl;	
		}
		
		else if(choice==2)
		{
			int d=a-b;
			cout<<"   "<<a<<endl;
			cout<<"   "<<b<<endl;
			cout<<"  -"<<d<<endl;	
		}
		
		else if(choice==3)
		{
			int e=a*b;
			cout<<"   "<<a<<endl;
			cout<<"   "<<b<<endl;
			cout<<"  *"<<e<<endl;	
		}
		
		else if(choice==4)
		{
			float f=a/b;
			cout<<"   "<<a<<endl;
			cout<<"   "<<b<<endl;
			cout<<"  /"<<f<<endl;	
		}
		
		else if(choice==5)
		{
			cout<<"Quit the Program"<<endl;
		}
		
		else
		{
			cout<<"Invalid Input"<<endl;
		}
		
	}while(choice!=5);
	
	
	//Program terminate
	return 0;
}
