// 4.26
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter a Character"<<endl;
	ch=cin.get();
	
	switch(ch)
	{
		case 'A':
		case 'a':
			cout<<"30 cent Per Pound"<<endl;
			break;
		case 'B':
		case 'b':
			cout<<"40 cent per Pound"<<endl;
			break;
		case 'C':
		case 'c':
			cout<<"50 cent per Pound"<<endl;
			break;
	}
	// Program Terminate
	return 0;
}
