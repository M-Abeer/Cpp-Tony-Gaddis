// Soccer Scores
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

struct Player
{
	string name;
	int number;
	int score;
};

int main()
{
	Player p[12];
	int i;
	
	// Read Data from User
	for(i=0;i<12;i++)
	{
		cout<<"Enter Name of Player "<<(i+1)<<endl;
		cin.ignore();
		getline(cin,p[i].name);
		cout<<"Enter Player Number "<<endl;
		cin>>p[i].number;
		cout<<"Enter Points "<<endl;
		cin>>p[i].score;
	}
	
	// Display
	cout<<"\t\t\tMATCH SUMMARY\n\n";
	cout<<"Name\t\tNumber\t\tPoints\n";
	for(i=0;i<12;i++)
	{
		cout<<p[i].name<<"\t\t"<<p[i].number<<"\t\t"<<p[i].score<<endl;
	}
	cout<<"------------------------------------------------------------"<<endl;
	// Calculate Total Points
	double Total=0;
	for(i=0;i<12;i++)
	{
		Total+=p[i].score;
	}
	
	int high=p[0].score;
	int loc;
	for(i=1;i<=12;i++)
	{
		if(p[i].score>high)
		{
			high=p[i].score;
			loc=i;
		}
	}
	
	// Display The Report
	cout<<"\t\tMan of Match \n";
	cout<<"Data of Player Having Highest Scores "<<p[loc].name<<"\t"<<p[loc].number<<endl;
	cout<<"High Score is "<<high<<endl;
	
	
}
