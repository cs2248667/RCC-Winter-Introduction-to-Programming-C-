/* 
 * File:   main.cpp
 * Author: Collin Stewart
 * Created on January 10, 2017, 8:13 PM
 */

#include <iostream>

using namespace std;
int main() 
{
    int payAmount = 2200.0,
        payPeriods = 26,
        annualPay;
    annualPay =  payAmount * payPeriods;     
    
    cout << " The employee's total annual pay is " << annualPay << endl;
    
    return 0;
}

