// Example 3.21
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"This program has paused. Press ENTER to continue"<<endl;
	cin.get(ch);
	
	cout<<"This program has paused again. Press ENTER to continue"<<endl;
	ch=cin.get();
	
	cout<<"It has passed third time. Please press ENTER again"<<endl;
	cin.get();
	
	cout<<"ThankYou"<<endl;
	
	//Program Terminte
	return 0;
}
