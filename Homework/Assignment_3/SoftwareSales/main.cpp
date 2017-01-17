
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine the total cost of a purchase
 * Created on January 16, 2017, 11:07 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    int units;
    double discount;
    double total;
    cout << setprecision(2) << fixed;
    
    cout << " Enter the number of units sold ";
    cin >> units;
    
     if(units >= 10 && units <= 19){
    discount = (units * 99) * 0.20;
    total = (units * 99) - discount;
    cout << " The total amount is $" << total << endl;
    }
     else{
    if(units >= 20 && units <=49){
    discount = (units * 99) * 0.30;
    total = (units * 99) - discount;
    cout << " The total amount is $" << total << endl;
    }
    else{
    if(units >= 50 && units <= 99)
    {
    discount = (units * 99) * 0.40;
    total = (units * 99) - discount;
    cout << " The total is: $" << total << endl;
    }
    else{
    if(units >= 100){
    discount = (units * 99) * 0.50;
    total = (units * 99) - discount;
    cout << " The total amount is $" << total << endl;
    }
    else{
    cout << " Invaild number, please enter a number 10 or above " << endl;
    }
    }
    }
    }
 
    return 0;
}

