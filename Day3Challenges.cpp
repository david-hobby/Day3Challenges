#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int year;
    cout << "Input year:\n";
    cin >> year;

    if(IsLeapYear(year))
    { 
        cout << year << " IS a Leap Year.\n";
    }
    else
    {
        cout << year << " IS NOT a Leap Year.\n";
    }

    int num;
    cout << "Input a number to factor:\n";
    cin >> num;

    FactorDisplay(num);
}


