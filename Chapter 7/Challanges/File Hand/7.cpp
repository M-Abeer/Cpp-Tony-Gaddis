// Number Analysisi Program

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int main()
{
	ifstream ifs;
	ifs.open("numbers.txt");
	vector<int>numbers;
	// We can also use Array
	if(ifs)
	{
		int num;
		while(ifs>>num)
		numbers.push_back(num);
		
	}
	else
	{
		cout<<" Error in opening File"<<endl;
	}
	ifs.close();
	
	    double lowest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] <= lowest_number)
            lowest_number = numbers[i];
    cout << "Lowest Number = " << lowest_number << endl;

    double highest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] >= highest_number)
            highest_number = numbers[i];
    cout << "Highest Number = " << highest_number << endl;
	
	
	double total = 0;
    for (int i = 0; i < numbers.size(); i++)
        total += numbers[i];
    cout << "Total = " << total << endl;

    double average = total / numbers.size();
    cout << "Average = " << average << endl;

    return 0;
}

