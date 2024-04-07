//  Example 4.12
#include<iostream>
using namespace std;
int main()
{
	int Score;
	
	cout<<"Enter Score"<<endl;
	cin>>Score;
	
	if(Score>=90)
		cout<<"Grade is A"<<endl;
		if(Score>=80)
			cout<<"Grade is B"<<endl;
			if(Score>=70)
				cout<<"Grade is C"<<endl;
				if(Score>=60)
					cout<<"Grade is D"<<endl;
					if(Score<60)
						cout<<"Invalid"<<endl;
						
	// Program Terminate
	return 0;
}
