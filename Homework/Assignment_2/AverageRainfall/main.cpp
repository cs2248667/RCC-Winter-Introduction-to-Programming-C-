/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 11, 2017, 10:25 PM
 * Calculate the average rainfall in three months
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    string month1, month2, month3;
    double amount1, amount2, amount3, average;
    cout << " Please enter the name of the first month ";
    cin >>  month1;
    cout << " Please enter the amount of rain that fell in " << month1 <<" ";
    cin >> amount1;
    cout << " Please enter the name of second month ";
    cin >> month2;
    cout << " Please enter the amount of rain that fell in " << month2 <<" ";
    cin >> amount2;
    cout << " Please enter the name of third month ";
    cin >> month3;
    cout << " Please enter the amount of rain that fell in " << month3 <<" ";
    cin >> amount3;
    cout << setprecision(2) << fixed;
    average = (amount1 + amount2 + amount3) / 3;
    cout << " The average rainfall for " << month1 << " " << month2 << " and "
            << month3 << " is " << average << endl;
            
    
    
    return 0;
}

