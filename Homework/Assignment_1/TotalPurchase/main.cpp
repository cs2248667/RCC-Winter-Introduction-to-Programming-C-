/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 10, 2017, 8:31 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float item1 = 15.95,
            item2 = 24.95,
            item3 = 6.95,
            item4 = 12.95,
            item5 = 3.95,
            subtotal,
            tax,
            total;
    
    subtotal = item1 + item2 + item3 + item4 + item5;
    tax = subtotal * 0.07;
    total = tax + subtotal;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    
    
    cout << " The Price of item 1 is " << item1 << endl;
    cout << " The Price of item 2 is " << item2 << endl;        
    cout << " The Price of item 3 is " << item3 << endl;
    cout << " The Price of item 4 is " << item4 << endl;
    cout << " The Price of item 5 is " << item5 << endl;
    cout << " The subtotal is " << subtotal << endl;
    cout << " The sales tax is " << tax << endl;
    cout << " The total comes out to " << total << endl;
    

    
    return 0;
}

