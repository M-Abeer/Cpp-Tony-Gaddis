// Example 12.10
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string filename;
	
	// Get File Name form SUer
	
	
	fstream file("names2.txt",ios::in);
	
	char ch;
	if(file)
	{
		file.get(ch);
		while(file)
		{
			cout<<ch<<endl;
			file.get(ch);
		}
	}
	
	// Close the File
	else
	{
		cout<<"File Not Found"<<endl;
	}
	
	file.close();
	
}
