//Planting Graveyard
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	//Variable
	double V;
	double R;
	double E;
	double S;
	//Read Data from User
	cout<<"Enter Length of Row in feet"<<endl;
	cin>>R;
	cout<<"Enter Amount of Space  used by End Post Assembly in feet"<<endl;
	cin>>E;
	cout<<"Enter amount of space between the wine in feet"<<endl;
	cin>>S;
	//Data Successfully Entered
	//As Given That
	V=(R-2*E)/S;
	cout<<"\n******************\n"<<endl;
	//cout<<setprecision(2)<<fixed<<right<<endl;
	cout<<"Number of Gravevines that will fit in a row are "<<V<<endl;
	//Terminate Progrm
	return 0;
}
