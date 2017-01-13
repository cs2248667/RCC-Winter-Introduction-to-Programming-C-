
/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 11, 2017, 7:54 PM
 * Calculate Gas Mileage 
 *  */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double gallons,
        miles,
        mpg;
    cout << setprecision(2) << fixed;
    cout <<"How many gallons of gas can your car hold? ";
    cin >> gallons;
    cout << "How many miles can your car drive with a full tank of gas ";
    cin >> miles;
    mpg = miles / gallons;
    cout  << "Your car drives " << mpg << " miles per gallon " 
            << endl;
    
    return 0;
}

