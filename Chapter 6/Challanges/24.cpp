// Rock Paper Scissor game
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>

int main()
{
	string User;
	cout<<"Enter Player Name"<<endl;
	getline(cin,User);
		
	// Get The Time
	unsigned seed = time(0);
	// Generate the Random Number
	srand(seed);
	// Read Data from User
	
	int choice;
	cout<<"Enter User Choice"<<endl;
	cin>>choice;
	while(choice<0||choice>3)
	{
		cout<<"Enter Value Again"<<endl;
		cin>>choice;
	}
	
	// Create Random Number for Computer
	int Computer;   // TO store Random Number For Computer
	const int MAX_VALUE=3;// Max Value by Computer
	const int MIN_VALUE=1;// Min Vakue by Computer
	Computer=(rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE);
	
	// Use if else if Statement 
	if(choice==4)
	{
		cout<<"Exit Program"<<endl;
	}
	else
	{
	
	
if(choice==1&&Computer==2)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<"Computer enters "<<Computer<<" and  wins"<<endl;
}
else if(choice==1&&Computer==3)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<User<<" enters "<<choice<<" and  wins"<<endl;
}
else if(choice==2&&Computer==1)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<User<<" enters "<<choice<<" and  wins"<<endl;
}
else if(choice==2&&Computer==3)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<"Computer enters "<<Computer<<" and  wins"<<endl;
}

else if(choice==3&&Computer==1)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<"Computer enters "<<Computer<<" and  wins"<<endl;
}
else if(choice==3&&Computer==2)
{
	cout<<User<<" enter "<<choice<<endl;
	cout<<"Computer enter "<<Computer<<endl;
	cout<<User<<" enters "<<choice<<" and  wins"<<endl;
}
else 
{	
	cout<<"invalid Input"<<endl;
}
}
// Program Terminate
return 0;
}


