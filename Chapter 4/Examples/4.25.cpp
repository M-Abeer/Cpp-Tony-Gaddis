// 4.25
#include<iostream>
using namespace std;
int main()
{
	int modelnum;
	
	// Get a Model Number from User
	cout<<"Please enter Model Number of TV "<<endl;
	cin>>modelnum;
	
	switch(modelnum)
	{
		case 100:
			cout<<"Model 100 has Remote Control"<<endl;
			break;
		case 200:
			cout<<"Model 200 has Remote Control and stereo Sound"<<endl;
			break;
		case 300:
			cout<<"Model 300 has Remote Control, Stereo Sound and Picture and Picture Capability"<<endl;
			break;
		default:
			cout<<"You enter Wrong Model"<<endl;
		
	}
	// Program Terminate
	return 0;
}
