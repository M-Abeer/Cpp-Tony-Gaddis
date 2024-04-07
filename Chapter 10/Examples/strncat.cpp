// strncat
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int SIZE1=17;
	const int SIZE2=18;
	int maxchar;
	
	char string1[SIZE1]="Wellcome ";
	char string2[SIZE2]="To North Carolina";
	
	cout<<string1<<endl;
	cout<<string2<<endl;
	maxchar=sizeof(string1)-(strlen(string1)+1); // To find Characters
	strncat(string1,string2,maxchar);  // In this way only 17 are avaiable
	cout<<string1<<endl;
}
