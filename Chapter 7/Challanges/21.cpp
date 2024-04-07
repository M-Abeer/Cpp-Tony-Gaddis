// 2D Array Operations
#include<iostream>
using namespace std;
#include<iomanip>

// Constants
const int ROWS=3;
const int COLUMNS=5;



// To Specify the Specific Row and Column according to Question
int row=1; //Row 1 Like
int column=4;  // Column 4


//Function 1 Starts
int getTotal(const int arg[][COLUMNS])
{
	
	int total=0;
	
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLUMNS;j++)
		
		{
			total+=arg[i][j];
		}
	}
	return total;
}


// Function2 Starts
int getAverage(const int a[][COLUMNS])
{
	int total=getTotal(a);
	
	int average;
	
	average=total/15;
	//
	return average;
}


// Function3 Starts
int getRowTotal(const int a[][COLUMNS],const int r)
{
	int Total=0;
	
		for(int j=0;j<COLUMNS;j++)
		{
			Total+=a[r-1][j];  // r-1 specifies specific row
		}
	
	return Total;
}


// Funstion4 Starts
int getColumnTotal(const int a[][COLUMNS],const int c)
{
	int total=0;
	
	for(int i=0;i<ROWS;i++)
	{
		total+=a[i][c-1];
	}
	
	return total;
}

// Function 5 Starts
int getHighestValue(const int a[][COLUMNS],int r)
{
	int high=a[r-1][0];
	for(int i=0;i<COLUMNS;i++)
	{
		if(a[r-1][i]>high)
		{
			high=a[r-1][i];
		}
	}
	
	return high;
}



// Function6 Starts
int getLowestValue(const int a[][COLUMNS],const int r)
{
	int low=0;
	low=a[r-1][0];
	for(int i=0;i<COLUMNS;i++)
	{
		if(a[r-1][i]<low)
		{
			low=a[r-1][i];
		}
	}
	return low;
}

// Functions End


// Main Start
int main()
{
	// 2D Array Initialization
	int a[3][5]={1,2,3,4,5,
			  	 6,7,8,9,10,
			  	 11,12,13,14,15};   // 2D Array
			  
	
	cout<<"\t\t\t\t"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t2D ARRAY OPERATIONS\n\n\n";
	
	
	
	// Get Total of Both arrays
	int x;
	x=getTotal(a);
	cout<<"The Total of Both Array is "<<x<<endl;
	cout<<"\n******\n";
	// getTotal ends
	
	
	
	// get Average
	int y;
	y=getAverage(a);
	cout<<"The Average of 2D Array is "<<y<<endl;
	cout<<"\n******\n";
	// get Average Done
	
	
	// Get row Sum
	int r;
	r=getRowTotal(a,row);
	cout<<"Row "<<row<<" sum is "<<r<<endl;
	cout<<"\n******\n";
	
	
	
	// Now GetColumn Total
	int c;
	c=getColumnTotal(a,column);
	cout<<"Column "<<column<<" sum is  "<<c<<endl;
	cout<<"\n******\n";
	
	
	// Get Highest in Specific Row
	int high;
	high= getHighestValue(a,row);
	cout<<"Highest Value in Row "<<row<<" is "<<high<<endl;
	cout<<"\n******\n";
	

	// Get Lowest Element in Specific Row
	int low;
	low=getLowestValue(a,row);
	cout<<"Lowest Value in Row "<<row<<" is "<<low<<endl;
	cout<<"\n******\n";
	


	// Program terminate
	return 0;

}

