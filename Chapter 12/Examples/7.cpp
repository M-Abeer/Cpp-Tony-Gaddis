// 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string input;
	fstream nameFile("demoFile.txt",ios::in);
	while(nameFile>>input)
	{
		cout<<input<<endl;
	}
	
	
	
	
	
}
