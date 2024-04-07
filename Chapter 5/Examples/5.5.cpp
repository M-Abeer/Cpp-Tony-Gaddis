// Example 5.5
#include<iostream>
using namespace std;
int main()
{
	//Constants for minimum and Maximum Players
	const int max=15,
			  min=9;
	//Variable
	int player,//Number of avaiable Players
		teamplayer,//Number of Desired Player per Team
		numteams,//Number of Teams
		leftover;//Number of Player Left Over
	
	cout<<"Enter Number of Desired Player per Team"<<endl;
	cin>>teamplayer;
	while(teamplayer<9||teamplayer>15)
	{
		cout<<"Error"<<endl;
		cout<<"Enter Between Given Data"<<endl;
		cin>>teamplayer;
	}
	cout<<"Enter Number of Avaiable Players"<<endl;
	cin>>player;
	while(player<=0)
	{
		cout<<"ERROR"<<endl;
		cin>>player;
		
	}
	//Calculate Number of Teams
	numteams=player/teamplayer;
	
	//calculate Number of lEftOver Player
	leftover=player%teamplayer;
	
	//Display Results
	cout<<"There will be "<<numteams<<" teams with "<<leftover<<" player left over"<<endl;
	//Program Terminate
	return 0;
	
}
