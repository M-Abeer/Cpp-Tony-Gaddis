// 5.23
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("BadList.txt");
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

