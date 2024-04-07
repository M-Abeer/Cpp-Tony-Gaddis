// isspace

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	
	
	char ch='\t';
	
	if(isspace(ch))
	{
		cout<<"Yes it is White Space Caharcter"<<endl;
		
	}
	else
	{
		cout<<"it is Not a White Space Character "<<endl;
	}
	
	
	// program terminate
	return 0;
}
