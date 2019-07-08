#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
    int hours, bill;
    char pack;

cout << fixed << showpoint << setprecision(2);

cout << "INTERNET PACKAGES GUIDE" << endl;
    cout << "Package A: For P995/mo 10 hrs of access (Additional hours are P20/hr)" << endl;
    cout << "Package B: For P1495/mo 20 hrs of access (Additional hours are P10/hr)" << endl;
    cout << "Package C: For P1995/mo of unlimited access" << endl<< endl;
    
    cout << "Which package did you avail? (A, B, or C) ";
    cin >> pack;
    
    switch(pack)
    {
    case 'A':
    case 'a':
    {
    cout << "How many hours have you consumed? ";
    cin >> hours;
    if (hours>10)
    {
    bill = 995 + ((hours-10)*20);
}
else
{
bill = 995;
}
}
break;
case 'B':
    case 'b':
    {
    cout << "How many hours have you consumed? ";
    cin >> hours;
    if (hours>20)
    {
    bill = 1495 + ((hours-20)*10);
}
else
{
bill = 1495;
}
}
break;
case 'C':
    case 'c':
    {
bill = 1995;
}
break;
default:
{
cout << "INVALID INPUT.";
}

}

cout << "Your total bill is: P" << bill;

return 0;
}
