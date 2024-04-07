// How many Widget?
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	
	double weight=12.5;
	double pallet_wt;
	double pallet_with_widgets;
	double widget_weight;
	double no_of_widget;
	
	// Ask how much pallet weighs by itself
    cout << endl;
    cout << "How much does the pallet weight by itself? ";
    cin >> pallet_wt;

    // Ask how much pallet weighs with widget stacked on
    cout << endl;
    cout << "How much does the pallet weight with widgets?";
    cin >> pallet_with_widgets;
    
	//Calculate Widget Weight
    widget_weight=pallet_with_widgets-pallet_wt;
    
	//Calculate Number of Widgets
    no_of_widget=widget_weight/weight;
    
	//Display the Report
    cout<<endl;
    cout<<"\n********\n";
    cout<<"Yukon Widget Company\n";
    cout<<"\n********\n";
    cout<<"The number of Widget stacked on the Pallet is "<<no_of_widget<<endl;
    //Program Terminate
    
	return 0;
    
}
