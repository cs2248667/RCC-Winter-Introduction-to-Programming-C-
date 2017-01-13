
/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 11, 2017, 9:48 PM
 * Determine how many tickets were sold
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    double classa = 15, classb = 12, classc = 9, sold, total;
    cout << setprecision(2) << fixed;
    cout << " How many Class A seats were sold? ";
    cin >> sold;
    classa *= sold;
    
    cout << " How many Class B seats were sold? ";
    cin >> sold;
    classb *= sold;
    
    cout <<" How many class C seats were sold ";
    cin >> sold;
    classc *= sold;
    
    total = classa + classb + classc;
    cout << "The amount of income generated was $" << total << endl;
    
            
    
    
    
    
    
    return 0;
}

