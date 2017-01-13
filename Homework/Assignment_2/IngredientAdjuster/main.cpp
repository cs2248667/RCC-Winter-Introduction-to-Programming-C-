

/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 12, 2017, 9:13 PM
 *To show the amount of ingredients
 */
#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    double cupsOfSugar48 = 1.5,
            cupsOfButter48 = 1,
            cupsOfFlour48 = 2.75,
            cupsOfSugar,
            cupsOfButter,
            cupsOfFlour;
    
    int completeBatch = 48;
    int numberOfCookies;
           
    
    cout << " How many cookies would you like to make? ";
    cin >> numberOfCookies;

    cupsOfSugar = ( numberOfCookies / completeBatch ) * cupsOfSugar48;
    cupsOfButter = ( numberOfCookies / completeBatch ) * cupsOfButter48;
    cupsOfFlour = ( numberOfCookies / completeBatch ) * cupsOfFlour48;
    
    cout << " In order to make " << numberOfCookies << " cookies, you will "
            " need " << endl;
    cout << cupsOfSugar << " cups of sugar " << endl;
    cout << cupsOfButter << " cups of buuter " << endl;
    cout << cupsOfFlour << " cups of flour " << endl;
    return 0;
}

