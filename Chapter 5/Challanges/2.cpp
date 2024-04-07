// Characters for the ASCII Code
#include<iostream>
using namespace std;
int main()
{
	
	int i;
	for(i=0;i<127;i++)
	{
		cout<<static_cast<char>(i);
		
        if (i % 16 == 0)
            cout << endl;	
	}	
	
	// Program terminate
	return 0;	
	
}
