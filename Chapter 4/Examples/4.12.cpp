// 4.12
#include<iostream>
using namespace std;
int main()
{
	float Score;
	
	// Read data from user
	cout<<"Please enter Score"<<endl;
	cin>>Score;
	
	// Use Nested if
	
	if(Score>=90)
	{
		cout<<"Grade is A"<<endl;
		
	}
	else
	{
		if(Score>=80)
		{
			cout<<"B"<<endl;
		}
		else
		{
			if(Score>=70)
			{
				cout<<"C"<<endl;
			}
			else
			
			{
				if(Score>=60)
				{
					cout<<"D"<<endl;
				}
				else
				{
					if(Score<60)
					{
						cout<<"F"<<endl;
					}
					else
					{
						cout<<"Invalid"<<endl;
					}
				}
			}
		}
	}
	
	// Program Terminate
	return 0;
}
