/// Magic 8 Ball
#include<iostream>
#include<ctime>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	/*
	ifstream ifs;
	ifs.open("Responses.txt");
	*/
	// File Not Opening
	// So
	string line[5];
	line[0]="Yes";
	line[1]="No";
	line[2]="Yes of Course";
	line[3]="For sure";
	line[4]="No way!";
	
	char question[100];
	unsigned seed=time(0);
	srand(seed);
			
	cout<<"Enter your Question "<<endl;
	cin>>question;		
	
	cout<<line[rand()%5]<<endl;
	// Program Terminate
	return 0;	
}
