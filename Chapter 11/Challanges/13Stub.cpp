// Drink Machine Stimulator
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

struct Drink
{
	string drink_name;
	double cost;
	int number_of_drinks;
};


int main()
{
	double earn=0;
	int choice;
	while(1)
	{
		

	
	// Filhal aik k lie than for 5
	Drink d[5]={ "Cola"     ,.75,20,
				"Root Beer" ,.75,20,
				"Lemon-Lime",.75,20,
				"Grape Soda",.80,20,
				"Cream Soda",.80,20};
				
				

				

	
	
	// Menu
	cout<<"\t\t\tDrink Machine Stimulator\n\n";
	cout<<"Cola"<<endl;
	cout<<"Root Beer"<<endl;
	cout<<"Lemon Lime"<<endl;
	cout<<"Grape Soda"<<endl;
	cout<<"Cream Soda"<<endl;
	cout<<"Press 2 to close "<<endl;
	
	
	cout<<"Enter Your Choice "<<endl;
	cin>>choice;
	
	string drink;
	int number;
	if (choice==1)
	{
		
				cout<<"Enter Number "<<endl;
				cin>>number;
				//
				if(number==1)
				
				{
			
				if(d[0].number_of_drinks==0)
				{
					cout<<"This Cold Drink is Sold out..Sorry"<<endl;
				}
				else
				{
					
					double money;
					cout<<d[0].drink_name<<endl;
					cout<<"Money inserted in machine "<<endl;
					cin>>money;
					double change;
					change=money-d[0].cost;
					cout<<"Money return to that customer "<<change<<endl;
					d[0].number_of_drinks--;
					cout<<"Number of Drinks Remaining "<<d[0].number_of_drinks<<endl;
					earn+=d[0].cost;
				}

 				}  // pehla if
 		
 				else if(number==2)
				
				{
			
				if(d[1].number_of_drinks==0)
				{
					cout<<"This Cold Drink is Sold out..Sorry"<<endl;
				}
				else
				{
					
					double money;
					cout<<d[1].drink_name<<endl;
					cout<<"Money inserted in machine "<<endl;
					cin>>money;
					double change;
					change=money-d[1].cost;
					cout<<"Money return to that customer "<<change<<endl;
					d[1].number_of_drinks--;
					cout<<"Number of Drinks Remaining "<<d[1].number_of_drinks<<endl;
					earn+=d[1].cost;
				}

 		}  // for
 		
 		
 		else if(number==3)
				
		{ 
		
			
				if(d[2].number_of_drinks==0)
				{
					cout<<"This Cold Drink is Sold out..Sorry"<<endl;
				}
				else
				{
					
					double money;
					cout<<d[2].drink_name<<endl;
					cout<<"Money inserted in machine "<<endl;
					cin>>money;
					double change;
					change=money-d[2].cost;
					cout<<"Money return to that customer "<<change<<endl;
					d[2].number_of_drinks--;
					cout<<"Number of Drinks Remaining "<<d[2].number_of_drinks<<endl;
					earn+=d[2].cost;
				}
				continue;

 		}  // for
 		
 		
 		
 	
	}
	  // if 

	
	else if(choice==2)
	{
		cout<<"Quit the Program"<<endl;
		break;
	}
	
	
	else
	{
		cout<<"OOps!!Invalid Input"<<endl;
	}
		
		
	cout<<"The Total AMount earn is "<<earn<<endl;
	  // while
	
}
	// Program terminate
	return 0;
}
