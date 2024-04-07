// Example 12.11
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	
	fstream dataFile("sentence.txt",ios::out);
	
	cout<<"Type a Sentence and be sure to end it with a period ."<<endl;
	
	cin.get(ch);
	while(ch!='.')
	{
		dataFile.put(ch);// CHaracter se File fill krta jae
		cin.get(ch);// Charcater Read krta jae
	}
	dataFile.put(ch);
}
