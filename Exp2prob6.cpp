#include<iostream>

using namespace std;

int main()
{
    int count, n, sum, final;
    cout <<"Please enter a number: ";
    cin >> n;
    
    for (count=1;count<=n;count++)
    {
        cout << count;
        if(count<n)
        {
            cout << "+";
        }
    }
    cout << "=";
    
    int add, first=0, second = count-(count-1);
    
    for (count=0;count<=n;count++)
    {
    	sum = sum+count;
    	final = sum -1;
    }
    cout << final;
       
    return 0;
}

