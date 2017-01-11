/* 
  File: Restaurant Bill
  Author: Collin Stewart
  Created on January 9, 2017
  Purpose: COmpute tax and tip on a restaurant bill
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    double total,
           bill = 88.67,
           tax = 0.0675,
           billtax,
           billtaxtotal,
           tip = 0.20,
           tiptotal;
   
    billtax = bill * tax;
    billtaxtotal = billtax + bill;
    tiptotal = billtaxtotal * tip;
    total = tiptotal + billtaxtotal;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    
    cout << " The cost of the meal was $" << bill << endl;
    cout << " The tax amount was $" << billtax << endl;
    cout << " The tip amount was $" << tiptotal << endl;
    cout << " The total amount on the bill was $" << total << endl;
    
    
    return 0;

}

