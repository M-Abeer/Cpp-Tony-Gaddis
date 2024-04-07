// Example 12.14
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int SIZE=10;
	int numbers[SIZE]={1,2,3,4,5,6,7,8,9,10};
	
	fstream file;
	// Open File
	file.open("numbers.data",ios::binary|ios::out);
	// Write Data to File
	file.write(reinterpret_cast<char*>(numbers),sizeof(numbers));
	
	
	// Read DAta
	file.open("numbers.data",ios::binary|ios::in);
	
	// 
	file.read(reinterpret_cast<char*>(numbers),sizeof(numbers));
	
	for(int i=0;i<SIZE;i++)
	{
		cout<<numbers[i]<<endl;
	}
	
	file.close();
	
}
