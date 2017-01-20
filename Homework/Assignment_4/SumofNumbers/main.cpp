
/* 
 * File:   main.cpp
 * Author: Collin
 * To find the sum of an amount of numbers
 * Created on January 19, 2017, 7:21 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    
    int numberInput;
    int sum = 0;
    
    cout << " Please enter the amount of numbers you would like to add. ";
    cin >> numberInput;
    
    while ( numberInput < 0){
        cout << " Please enter a positive number. ";
        cin >> numberInput;}
    
    
    for (int i = 0; i <= numberInput; i++)
        sum += i;
    
    cout << " The sum of the numbers are " << sum << endl;
    
    
    return 0;
}

