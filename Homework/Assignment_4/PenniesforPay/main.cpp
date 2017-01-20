
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate a salary that doubled each day
 * Created on January 19, 2017, 8:49 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {

    int days;
    double money = 0.01;
    double sum;
    double total;
    cout << " Please enter the number of days ";
    cin >> days;
    
    while (days < 1){
        cout << " Please pick a number equal to or greater than 1 ";
        cin >> days;
    }
    for ( int i = 1; i <= days; i++){
        money *= 2;
        sum += money;
        cout << " In " << i << " days " << "you made $" << money << endl; 
        
        
    }
    
    cout << " your total is " << sum << endl;
    
    sum += money;
    
    return 0;
}

