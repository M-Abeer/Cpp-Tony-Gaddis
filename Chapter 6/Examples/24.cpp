// Example 6.24
#include<iostream>
using namespace std;

void displayStars(int =10, int=1);

int main()
{
	displayStars();
	cout<<endl;
	displayStars(5);  // Columns
	cout<<endl;
	displayStars(7,3);   // (Column,Rows)
	return 0;
		
}
void displayStars(int cols,int rows)
{
	// Nested Loop
	for(int i=0;i<rows;i++)   // Rows
	{
		for(int j=0;j<cols;j++)
			cout<<"***"<<endl;
	}
}
