

/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 11, 2017, 10:44 PM
 * To find the percentage of males and females
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float numberm, numberf, percentm, percentf, total;
    cout << " Please enter the number of males in the class ";
    cin >> numberm;
    cout << " Please enter the number of females in the class ";
    cin >> numberf;
    total = numberm + numberf;
    percentm = (numberm / total) * 100;
    percentf = (numberf / total) * 100;
    cout << setprecision(0) << fixed;
    cout << " The percentage of males in the class is " << percentm <<"%"
            << endl;
    cout << " The percentage of females in the class is " << percentf 
            <<"%" << endl;
            
    
            
    
    
    return 0;
}

