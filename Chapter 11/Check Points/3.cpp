// // CP 11.3
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
struct MovieData
{
	string moviename;
	string director;
	string producer;
	int year;
};
int main()
{
	MovieData m;
	
	// Get Movie Name
	cout<<"ENter Name of Movie"<<endl;

	getline(cin,m.moviename);
	
	
	// Get Director Name
	cout<<"Enter Name of Director"<<endl;

	getline(cin,m.director);
	
	// Get the Name of Producer
	cout<<"Enter Name of Producer"<<endl;

	getline(cin,m.producer);
	
	// Get theYear
	cout<<"ENter Year of Release"<<endl;
	cin>>m.year;
	
	
	
	//Display
	cout<<"Name of Movie is "<<m.moviename<<endl;
	cout<<"Name of Producer is "<<m.producer<<endl;
	cout<<"Name of Director is "<<m.director<<endl;
	cout<<"Year of Release is "<<m.year<<endl;
	
	//
	return 0;
	
}
