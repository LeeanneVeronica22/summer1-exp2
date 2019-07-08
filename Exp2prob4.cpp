#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int count;
    int even;
    
    for (count=1; count<=10; count++)
    {
        cout << count<<",";
    }
    for (count=12; count<=30;count++)
    {
        even = count%2;
        if(even==1)
        {
             cout << ",";
             continue;
        }
        cout << count;
    }
   	getch();
    return 0;
}


