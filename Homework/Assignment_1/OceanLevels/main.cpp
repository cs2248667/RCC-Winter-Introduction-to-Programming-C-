/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 10, 2017, 8:21 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    float ocean = 1.5,
          year5,
          year7,
          year10;
    year5 = ocean * 5;
    year7 = ocean * 7;
    year10 = ocean * 10;
    
    cout << " The ocean's level is rising by 1.5 millimeters each year " << endl;
    cout << " In 5 years the ocean's level will rise by " << year5 << endl;
    cout << " In 7 years the ocean's level will rise by " << year7 << endl;
    cout << " In 10 years the ocean's level will rise by " << year10 << endl;
    
    
    
    
    return 0;
}

