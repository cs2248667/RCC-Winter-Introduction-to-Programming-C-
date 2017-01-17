
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine which number is larger
 * Created on January 16, 2017, 12:37 AM
 */

#include <iostream>
using namespace std;

int main() 
{
    int num1;
    int num2;
    
    cout << " Please enter the first number ";
    cin >> num1;
    cout << " Please enter the second number ";
    cin >> num2;
    
    if (num1 > num2)
        cout << num1 << " is the larger number and " << num2 << " is the "
                "smaller number " << endl;
    
    else 
        cout << num1 << " is the smaller number and " << num2 << " is the "
                "larger number " << endl;
    
    
    
    return 0;
}

