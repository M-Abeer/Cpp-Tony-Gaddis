
// Stock Transaction Program
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	
	//Purchae Share
	double No_of_share=1000;
	double Per_share_paid=45.50;
	double Stock_Brocker1=0.02;
	
	//Total Paid for Share
	double Total_paid;	
	Total_paid=No_of_share*Per_share_paid;
	
	//Comission Given to Stock Broker
	double Comission1;
	Comission1=Total_paid*Stock_Brocker1;
	
	//Sold Share
	double No_of_share_Sold=1000;;
	double Per_share_sold=56.90;
	double Stock_Broker2=0.02;
	
	//Total Amount Received
	double Total_receive;
	Total_receive=No_of_share_Sold*Per_share_sold;
	
	//Comission given to Stock Broker
	double Comission2;
	Comission2=Total_receive*Stock_Broker2;
	
	//Calculate the Profit
	double Amount_of_profit;
	Amount_of_profit=Total_receive-Total_paid-Comission1-Comission2;
	
	
	//Display Report
	cout<<endl;
	cout<<"\n************************\n";
	cout<<endl;
	cout<<"Amount of money Joe paid for the stock "<<Total_paid<<endl;
	cout<<"Amount of comission Joe Paid when he bought the Comission "<<Comission1<<endl;
	cout<<"Amount that Joe sold the Stock "<<Total_receive<<endl;
	cout<<"Amount of comission Joe Paid when he bought the Comission "<<Comission2<<endl;
	cout<<"Amount of Profit Joe made after selling his Stock and paying comissions ";
	cout<<Amount_of_profit<<endl;
	
	//Program Terminate
	return 0;
	
}






/*
#include <iostream>
#include <iomanip>  // Formatting

using namespace std;

int main()
{
    // Variables
    const float BROKER_COM_PER = .02,
                PRICE_PAID_PER_SHARE = 45.50,
                PRICE_SOLD_PER_SHARE = 56.90;

    const int NUM_OF_SHARES = 1000;

    float joes_stock_purchase,
          total_com_paid_bought,
          total_com_paid_sold,
          amount_stock_sold_for,
          amount_of_profit;

    // Explain program
    cout << endl;
    cout << "*****************************************\n\n";
    cout << "Last month Joe purchased some stock in \n";
    cout << "Acme Software, Inc. Here are the details\n";
    cout << "of the purchase: \n";
    cout << "• The number of shares that Joe purchased\n";
    cout << "  was 1,000.\n";
    cout << "• When Joe purchased the stock, he paid \n"; 
    cout << "  $45.50 per share.\n";
    cout << "• Joe paid his stockbroker a commission \n";
    cout << "  that amounted to 2% of the amount he \n";
    cout << "  paid for the stock.\n\n";
    cout << "Two weeks later Joe sold the stock. \n";
    cout << "Here are the details of the sale:\n";
    cout << "• The number of shares that Joe sold was\n";
    cout << "  1,000.\n";
    cout << "• He sold the stock for $56.90 per share.\n";
    cout << "• He paid his stockbroker another\n"; 
    cout << "  commission that amounted to 2% of the \n";
    cout << "  amount he received for the stock.\n\n";
    cout << "*****************************************\n\n";

    // Calculate
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;

    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;

    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;

    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;

    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;

    // Display information:
    cout << setprecision(2) << fixed << endl;

    cout << "Amount paid for the stock: ";
    cout << joes_stock_purchase << endl;

    cout << "Amount commission paid when bought stock: ";
    cout << total_com_paid_bought << endl;

    cout << "Amount Joe sold stock for: ";
    cout << amount_stock_sold_for << endl;

    cout << "Amount commission paid when stock sold: ";
    cout << total_com_paid_sold << endl;

    cout << "Amount of profit Joe made after selling stock and\n";
    cout << "paying two commissions to broker ";
    cout << amount_of_profit << '\n' << endl;
    cout << "*****************************************\n\n";

    return 0;
}

*/
