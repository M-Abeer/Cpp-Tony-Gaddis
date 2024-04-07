// CP 6.22
#include<iostream>
using namespace std;

void test(int=2,int=4,int=6);  //Function ProtoType

int main()
{
	test();       // 2 4 6
	test(6);      //6 4 6 
	test(3,9);    //3 9 6
	test(1,5,7);  // 1 5 7
	// Program Terminate
	return 0;
}

void test(int first, int second, int third)
{
	first+=3;
	second+=6;
	third+=9;
	cout<<first<<"\t"<<second<<"\t"<<third<<"\t"<<endl;
}
