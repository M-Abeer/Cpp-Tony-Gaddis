// 5.24
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string filename;
	cout<<"Enter File Name"<<endl;
	cin>>filename;
	ifstream ifs;
	ifs.open(filename.c_str());
	int number;
	
	if(ifs)
	{
		while(ifs>>number)
			cout<<number;
	ifs.close();
	}
	else
	{
		cout<<"Error Opening The File"<<endl;
	}
	
	
// Program Terminate
return 0;
}

