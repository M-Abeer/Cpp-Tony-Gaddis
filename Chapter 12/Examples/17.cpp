// Example 12.17
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	fstream file("alphabet.txt",ios::in);
	char ch;
	
	
	// Move to the byte 5
	file.seekg(5L,ios::beg);
	file.get(ch);
	cout<<"Byte 5 from Beginning "<<ch<<endl;
	
	// Move to the 10th byte from the end
	file.seekg(-10L,ios::end);
	file.get(ch);
	cout<<"Byte 10 from end "<<ch<<endl;
	
	
	// Move to the Byte 3from current Position
	file.seekg(3L,ios::cur);
	file.get(ch);
	cout<<"Byte 3 from Current "<<ch<<endl;
	
	//
	file.close();
	return 0;
}
