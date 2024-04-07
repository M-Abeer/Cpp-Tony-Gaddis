//
#include<iostream>
using namespace std;
int main()
{
	int i;
	int Total_Floor=0;
	int Rooms_Floor=0;
	int Total_Rooms=0;
	int Occupied=0;
	int Total_Occupied=0;
	float Percentage=0.0;
	cout<<"Enter Number of Floor"<<endl;
	cin>>Total_Floor;
	while(Total_Floor<0)
	{
		cout<<"Enter Correct Value"<<endl;
		cin>>Total_Floor;
	}
	for(i=1;i<=Total_Floor;i++)
	{
		if(i!=13)
		{
			cout<<"Enter Number of Rooms"<<endl;
			cin>>Rooms_Floor;	
		}
		
		while(Rooms_Floor<10)
		{
			cout<<"Enter Correct Rooooms"<<endl;
			cin>>Rooms_Floor;
		}
		cout<<"How many Rooms are Occupied "<<endl;
		cin>>Occupied;
		Total_Rooms+=Rooms_Floor;
		Total_Occupied+=Occupied;
		
	}
	Percentage=(Total_Occupied*1.0f/Total_Rooms)*100;
	
	cout<<"Total Rooms are "<<Total_Rooms<<endl;
	cout<<"Total Rooms that are Occupied "<<Total_Occupied<<endl;
	cout<<"Rooms that Remain empty "<<Total_Rooms-Total_Occupied<<endl;
	cout<<"Percentage of Occupied Rooms "<<Percentage<<endl;
	return 0;
}
