
/* 
 * File:   main.cpp
 * Author: Collin
 * To convert currency
 * Created on January 12, 2017, 11:34 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main() 
{
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    double dollar;
    double yenToDollars;
    double eurosToDollars;
    
    cout << setprecision(2);
    cout << fixed;
    
    cout << " Enter the amount of U.S Dollars to be converted to yen ";
    cin >> dollar;
    yenToDollars = dollar * YEN_PER_DOLLAR;
    cout << " You will be given " << yenToDollars << " yen for " << dollar <<
            " dollars " << endl;
    
    cout << " Enter the amount of U.S Dollars to be converted to euros ";
    cin >> dollar;
    eurosToDollars = dollar * EUROS_PER_DOLLAR;
    cout << " You will be given " << eurosToDollars << " euros for " << dollar 
            << " dollars " << endl;
            
    
    
    
    return 0;
}

