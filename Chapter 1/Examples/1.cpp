// Example 1.1
#include<iostream>
using namespace std;
int main()
{
	//Variables
	double Rate,Pay,Hours;
	//Read Data from user
	cout<<"Enter number of Hours"<<endl;
	cin>>Hours;
	cout<<"Enter Pay per Hour"<<endl;
	cin>>Rate;
	Pay=Rate*Hours;
	cout<<"\n***********\n";
	cout<<"Pay is "<<Pay<<endl;
	//Program terminate
	return 0;
	
}
