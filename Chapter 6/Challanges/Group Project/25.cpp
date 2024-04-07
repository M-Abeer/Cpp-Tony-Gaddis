// Complete Done
// Stub for Last Part// Group Project jo mei akela bna rha
// Travel Expense


#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


// Functions ProtoTypes

void days(int &);
void ArrivalandDeparture(double &,double &);
void getAirFair(double &,double&);
void getCarRental(double &,double &);
void getMilesDriven(double &,double &);
void getParkingFee(int &,double &, double &,double &,double &);
void getTaxiFee(int &,double &,double &,double &,double &);
void getSeminarFee(double &,double &);
void getHotelExpense(int &,double &,double &,double &,double &);
void getMeatEaten(double , double , double &,double &, double &,double &);

using namespace std;


// Main Function
int main()
{
	
	// Accumulators
	
	double Expenses=0;
	double AllowableExpense=0;
	double total_amount_saved=0;
	double Reimbursement=0;
	
	
	// Here Start Calling Function
	
	//1
	int a;
	days(a);
	//cout<<"Total Number of Days "<<a<<endl;
	//____________________
	
	
	
	//2
	double b,c; // b is Deaprture
	ArrivalandDeparture(b,c); // C is Arrival
	//cout<<"Departure Time "<<b<<endl<<"Arrival Time "<<c<<endl;
	//_____________________
	
	
	
	//3
	double AirFair;
	getAirFair(AirFair,Expenses);
	//cout<<"Air fair"<<AirFair<<endl;
	//_____________________
	
	
	
	//4
	double car;
	getCarRental(car,Expenses);
	//cout<<"Car rent"<<car<<endl;
	//____________________
	
	
	//5
	double MilesDriven;
	getMilesDriven(MilesDriven,Expenses);
	//cout<<"Miles Driven"<<MilesDriven<<endl;
	//______________________
	
	
	
	//6
	double ParkingFee;
	getParkingFee(a,Expenses,AllowableExpense,total_amount_saved,Reimbursement);
	//cout<<"Parking Fee"<<ParkingFee<<endl;
	//_______________________
	
	
	//7
	double TaxiFee;
	getTaxiFee(a,Expenses,AllowableExpense,total_amount_saved,Reimbursement);
	//cout<<"Taxi fee is "<<TaxiFee<<endl;
	//____________________________
	
	
	//8
	double Seminar;
	getSeminarFee(Seminar,Expenses);
	//cout<<"Seminar Fee is "<<Seminar<<endl;
	//_____________________________
	
	
	
	//9
	double Hotel;
	getHotelExpense(a,Expenses,AllowableExpense,total_amount_saved,Reimbursement);
	//
	//_____________________________
	
	
	
	//10
	double Meat;
	getMeatEaten(b,c,Expenses,AllowableExpense,total_amount_saved,Reimbursement);
	//
	//_____________________________
	
	
	
	// Display the Report
//	cout<<setprecision(2)<<fixed<<showpoint<<endl;

	cout<<endl;
	cout<<"\t\t\tTRAVEL EXPENSES\n\n";
	
	cout<<"Total Number of Days  $"<<a<<endl;
	cout<<"Departure Time        $"<<b<<endl;
	cout<<"Arrival Time          $"<<c<<endl;	
	cout<<"Total Expenses are    $"<<Expenses<<endl;
	cout<<"Alowable Expenses are $"<<AllowableExpense<<endl;
	cout<<"Total Reimbursement   $"<<Reimbursement<<endl;
	cout<<"Total Amount Saved    $"<<total_amount_saved<<endl;
	
			
			
	 
	//Program terminate
	return 0;		
			
}
// Main End



void days(int &a)
{
	
	int Days;
	cout<<"Enter Number of Days"<<endl;
	cin>>Days;
	a=Days;
	
}



void ArrivalandDeparture(double &b,double &c)
{
	
	
	double a,d;
	
	// Departure Time
	
	cout << "\nWhat is the time of departure" << endl
         << "on the first day of the trip? " << endl << endl
         << "(Use 24 hour clock to enter departure and arrial times." << endl
         << "Also, instead of using a colon, use a decimal point." << endl
         << "For example, 6:30am = 6.30 and 9:30pm = 21.30): "<<endl;
	cout<<"Enter Departure Time"<<endl;
	cin>>d;
	
	
	// Arrival Time
	
	cout << "\nWhat is the time of arrival back" << endl
         << "home on the last day of trip? "<<endl;
	cout<<"Enter Arrival Time"<<endl;
	cin>>a;
	
	b=d;
	c=a;
	
	
}



void getAirFair(double &AirFair,double &Expense)
{	


	double fair;
	cout<<"Enter Round Trip Air Fair"<<endl;
	cin>>fair;
	AirFair=fair;
	Expense+=AirFair;


}



void getCarRental(double &car,double &Expense)
{
	
	
	double rent;
	cout<<"Amount of Car Rental"<<endl;
	cin>>rent;
	car=rent;
	Expense+=car;


}



void getMilesDriven(double &MilesDriven,double &Expense)
{
	
	double fare,miles;
	string vehicle;
	cout<<"Is Private Vehicle Used?"<<endl;
	cin>>vehicle;
	
	if(vehicle=="Yes")
	{
		cout<<"Enter Miles Driven"<<endl;
		cin>>miles;
		fare=miles*0.27;
		MilesDriven=fare;
		Expense+=MilesDriven;
	
	}
	else
	{
		MilesDriven=0;
	}
}



void getParkingFee(int &a, double &Expenses,double &AllowableExpense,
double &total_amount_saved,double &Reimbursement )
{
	
	
	// Company Allow 6$ per Day for Parking
	const double ALLOWABLE_EXPENSES = 6.00;
    double Fee;
	
	
	for(int i=0;i<a;i++)
	{
	cout<<"Enter Parking Fee for Day #"<<(i+1)<<endl;
	cin>>Fee;
	AllowableExpense+=ALLOWABLE_EXPENSES;
	Expenses+=Fee;
		
	
	if(Fee>ALLOWABLE_EXPENSES)
	{
	    Reimbursement += (Fee - ALLOWABLE_EXPENSES);
	}
	else if(Fee<=ALLOWABLE_EXPENSES)
	{
       total_amount_saved += Fee; // 6.00

	}
	
	}	
}

void getTaxiFee(int &a,double &Expenses,double &AllowableExpense,
double &total_amount_saved,double &Reimbursement)
{
	
	const double ALLOWABLE_EXPENSES = 10.00;
	double fee,Charges;
	for(int i=0;i<a;i++)
	{
		AllowableExpense+=ALLOWABLE_EXPENSES;
		cout<<"Enter Taxi Fee for Day #"<<(i+1)<<endl;
		cin>>fee;
		Expenses+=fee;
		if(fee>ALLOWABLE_EXPENSES)
		{
			Reimbursement+=(fee-ALLOWABLE_EXPENSES);
			
			
		}
		else if(fee<=ALLOWABLE_EXPENSES)
		{
			total_amount_saved+=fee;
		}
		
	}
}

void getSeminarFee(double &Seminar,double &Expenses)
{
	
	double fee;
	cout<<"Enter Seminar Fee "<<endl;
	cin>>fee;
	Seminar=fee;
	Expenses+=Seminar;
	
	
}

void getHotelExpense(int &a,double &Expenses,double &AllowableExpense,
double &total_amount_saved,double &Reimbursement)
{
	
	
	const double lodging=90;
	double charges;
	
	
	for(int i=0;i<a-1;i++)// 5 Days 4 Nights
	{
		cout<<"Enter Charges of Lodging and Additional of Night "<<(i+1)<<endl;
		cin>>charges;
		Expenses+=charges;
		AllowableExpense+=lodging;
		
		if(charges>lodging)
		{
			Reimbursement+=(charges-lodging);
		}
		else if(charges<=lodging)
		{
			total_amount_saved+=charges;
		}
		
	}
	
}


void getMeatEaten(double b,double c,double &Expenses,double &AllowableExpense,
double &total_amount_saved,double &Reimbursement)
{
	
	
	double Bill;
		// Expense   // BreakFast
		cout<<"Enter Departure Bill"<<endl;
		cin>>Bill;
		
		const double ALLOWABLE_BREAKFAST = 9.00,
                 ALLOWABLE_LUNCH = 12.00,
                 ALLOWABLE_DINNER = 16.00;
		
		Expenses += Bill;
	
	
        if(b < 7)
        {
            AllowableExpense += ALLOWABLE_BREAKFAST;

            if (Bill > ALLOWABLE_BREAKFAST) // 11 > 9 = 2.00
                Reimbursement += (Bill - ALLOWABLE_BREAKFAST);

            else if (Bill <= ALLOWABLE_BREAKFAST)
                total_amount_saved += Bill; // 8 < 9 
            
        }
		
		
	
	else if(b<12&&b>=7)
	{
		
            AllowableExpense += ALLOWABLE_LUNCH;

            if (Bill > ALLOWABLE_LUNCH) // 13 > 12 = $1.00
                Reimbursement += (Bill - ALLOWABLE_LUNCH);

            else if (Bill <= ALLOWABLE_LUNCH) // 3.00 > 12 =
                total_amount_saved += Bill;
		
		
	}
	

        else if (b >= 12 && b < 18)
        {
            AllowableExpense += ALLOWABLE_DINNER;

            if (Bill > ALLOWABLE_DINNER)
                Reimbursement += (Bill - ALLOWABLE_DINNER);

            else if (Bill <= ALLOWABLE_DINNER)
                total_amount_saved += Bill;
        }
		
		
	//___________________________________________________
	
			
		double meal_fee;	
        cout << "How much was your meal? ";
        cout<<"Arrival Time"<<endl;
       	cin>>meal_fee;

        Expenses += meal_fee;

        

        if(c > 8 && c <= 13)
        {
            AllowableExpense += ALLOWABLE_BREAKFAST;

            if (meal_fee > ALLOWABLE_BREAKFAST)
                Reimbursement += (meal_fee - ALLOWABLE_BREAKFAST);

            else if (meal_fee <= ALLOWABLE_BREAKFAST)
                total_amount_saved += meal_fee;
        }


        else if (c > 13 && c <= 19)
        {
            AllowableExpense += ALLOWABLE_LUNCH;

            if (meal_fee > ALLOWABLE_LUNCH) // 13.00 > 12.00 == 1.00
                Reimbursement += (meal_fee - ALLOWABLE_LUNCH);

            else if (meal_fee <= ALLOWABLE_LUNCH)
                total_amount_saved += meal_fee; // 12.00 < n;
        }


        else if (c > 19)
        {
            AllowableExpense += ALLOWABLE_DINNER;

            if (meal_fee > ALLOWABLE_DINNER)
                Reimbursement += (meal_fee - ALLOWABLE_DINNER);

            else if (meal_fee <= ALLOWABLE_DINNER)
                total_amount_saved += meal_fee;
        }
    }

// The End
