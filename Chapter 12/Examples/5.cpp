// EXmaple 5
// Not Working  //
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

bool openFileIn(fstream &file, string name)
{
	file.open(name,ios::in);  // Error in this Line
	if(file.fail())
	{
		return false;
	}
	else
	{
		return true;
	}
}

void showContents(fstream &file)
{
	
	string line;
	while(file>>line)
	{
		cout<<line<<endl;
	}
	
}

int main()
{
	fstream dataFile;
	if(openFileIn(dataFile,"demoFile.txt"))
	{
		cout<<"File Opened Successfully"<<endl;
		cout<<"Read Data form File"<<endl;
		showContents(dataFile);
		dataFile.close();
		cout<<"Done"<<endl;
	}
	else
	{
		cout<<"File Not Found"<<endl;
	}
	
}
