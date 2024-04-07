// Example 12,8
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string input;
	fstream nameFile("demoFile.txt",ios::in);
	
	if(nameFile)
	{
		while(nameFile>>input)
		{
			cout<<input<<endl;
		}
	}
	
	
	
	
	
}
