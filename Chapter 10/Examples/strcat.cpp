// strcat

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char string1[13]="Hello ";
	char string2[]="World";
	cout<<string1<<endl;
	cout<<string2<<endl;
	
	strcat(string1,string2);
	cout<<string1<<endl;
}
