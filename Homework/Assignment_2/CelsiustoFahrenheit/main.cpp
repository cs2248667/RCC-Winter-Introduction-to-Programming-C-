/* 
 * File:   main.cpp
 * Author: Collin
 * To convert celcius to fahrenheit
 * Created on January 12, 2017, 11:21 PM
 */

#include <iostream>

using namespace std;

int main() 
{
    double f,
           c;
    
    cout << " Enter the temperature in celcius: ";
    cin >> c;
    
    f =  (9.0 / 5.0) * c  + 32;
    
    cout << " The temperature in fahrenheit is " << f << endl;
   
    return 0;
}

