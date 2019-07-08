#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i, numn, num1=0, num2=1;
    
    for(i=0; i<21;i++)
    {
        cout << num1;
        numn=num1+num2;
        num1=num2;
        num2=numn;
        cout << ",";
    }
    for(i=21; i<22;i++)
    {
        cout << num1;
        numn=num1+num2;
        num1=num2;
        num2=numn;
    }
    getch();
    return 0;
}

