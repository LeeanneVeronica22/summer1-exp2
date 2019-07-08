#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    const double z=2.5;
    int x, y;
    double v;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Please enter value of X: ";
    cin >> x;
    cout << "Please enter value of Y: ";
    cin >> y;
    
    switch(x)
    { 
        case 1:
        {
            if (y>1 && y<5)
            {
                v = x*y*z;
                cout << "Value of V = " << v;
            }
            else if (y>=5)
            {
                v = x+y/z;
                cout << "Value of V = " << v;
            }
            else
            {
                cout << "Invalid Input";
            }
        }
        break;
        
        case 2:
         {
            if (y<=5)
            {
                v = abs((x-y)/z);
                cout << "Value of V = " << v;
            }
            else if (y>5)
            {
                v = x - sqrt(y+z);
                cout << "Value of V = " << v;
            }
            else
            {
                cout << "Invalid Input";
            }
         }
            break;
            
            default:
            {
                v = x+y+z;
                cout << "Value of V = " << v;
            }
        }
    
   return 0;
}


