// Example 12.13
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	const int SIZE=4;
	char data[SIZE]={'A','B','C','D'};
	
	// Open file ffor output in binary mode
	file.open("test.data",ios::binary|ios::out);
	
	// Open for Writing
	cout<<"Writing the character to the File"<<endl;
	file.write(data,sizeof(data));
	
	file.close();
	
	
	
	// Open file for input in binary mode
	file.open("test.data",ios::binary|ios::in);
	
	// Read 
	file.read(data,sizeof(data));
	
	// Diplay the Contents
	for(int i=0;i<SIZE;i++)
	{
		cout<<data[i]<<endl;
	}
}
