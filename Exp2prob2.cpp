#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
    double bill, gal, unpaid;
    cout << fixed << showpoint << setprecision(2);
    
    cout << "\t\tWATER BILL"<< endl;
    cout << "note: charges are added to your bill. These are:"<< endl;
    cout << "(a) demand charge - P35" << endl;

    cout << "(b) consumption charge - P1.10/gallon" << endl<< endl;
    
    
    cout << "Please enter the number of gallons used: ";
    cin >> gal;
    cout << "Please enter amount of unpaid balance (input 0 if none): ";
    cin >> unpaid;
    
    if (unpaid == 0)
    {
        bill = 35+(1.10*gal);
    }
    else if (unpaid > 0)
    {
        bill = 35+(1.10*gal)+20+unpaid;
    }
    else
    {
        cout << "Invalid input. Please try again.";
    }
    
    cout << "\nYour water bill is: P" << bill;
   
   getch();
   return 0;
}  
