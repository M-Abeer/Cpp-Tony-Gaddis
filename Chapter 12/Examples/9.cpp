// Example 12.9
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string input;
	// Open the File for Input
	fstream dataFile("names2.txt",ios::in);
	
	if(dataFile)
	{
		getline(dataFile,input,'$');
		{
			while(dataFile)
			{
				cout<<input<<endl;
				getline(dataFile,input,'$');
				
			}
		}
	}
	
	
	
	
	dataFile.close();
	
}
