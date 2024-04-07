// Example 10.5
#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	const int SIZE=80;
	char line[SIZE];
	int i=0;
	
	// Get the Line
	cout<<"ENter a Line"<<endl;
	cin.getline(line,SIZE);
	
	// Display  
	cout<<"The Line you entered is "<<endl;
	while(line[i]!='\0')
	{
		cout<<line[i];
		i++;
	}
}
