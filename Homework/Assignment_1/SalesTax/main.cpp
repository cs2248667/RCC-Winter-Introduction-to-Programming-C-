/* 
  File: Sales Tax
  Author: Collin Stewart
  Created on January 9, 2017
  Purpose: Compute Sales Tax
 */
#include <iostream>
using namespace std;

int main() 
{
    double total,
           purchase = 95,
           tax,
           state = .04,
           county = .02;
    tax = state + county;
    total = purchase * tax;
    
    cout << " Total sales tax on a $95 purchase is $" << total << endl;
    
    return 0;
}

