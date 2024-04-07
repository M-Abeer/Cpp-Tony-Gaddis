// Example 12
#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
	
	char ch;
	string filename;
	ifstream inFile;
	ofstream outFile("out.txt");
	
	
	
	inFile.open("file.txt");
	
	
	if(inFile)
	{
		inFile.get(ch);
		while(inFile)
		{
			outFile.put(toupper(ch));
			inFile.get(ch);
		}
		
		
		inFile.close();
		outFile.close();
		cout<<"File Conversion Done"<<endl;
	}
	else
	{
		cout<<"File Not FInd"<<endl;
	}
	
	
	
}
