// Example 7.4
#include<iostream>
using namespace std;
#include<string>

int main()
{
	string planets[9]={"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune",
						"Pluto(a dwarf planet)"};
						
	// Display The Report
	cout<<"Here are the Planets\n";
	for(int i=0;i<9;i++)
	{
		cout<<planets[i]<<endl;
	}
	//
	return 0;
}
