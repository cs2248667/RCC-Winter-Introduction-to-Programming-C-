
/* 
 * File:   main.cpp
 * Author: Collin
 * To input the amount of change to make $1.00
 * Created on January 16, 2017, 9:59 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double pennies,
        nickels,
        dimes,
        quarters,
        total;
    cout << " Welcome to the change for a Dollar Game " << endl;
    cout << " Enter an amount of change and if you make $1.00 you win! " << endl;
    
    cout << " Enter the number of pennies ";
    cin >> pennies;
    cout << " Enter the number of nickels ";
     cin >> nickels;
    cout << " Enter the number of dimes ";
    cin >> dimes;
    cout << " Enter the number of quarters ";
    cin >> quarters;
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + 
            (quarters * 0.25);
    if (total == 1.00)
        cout << " You made $1.00, YOU WIN! " << endl;
    else if (total < 1.00 && total > 0 )
        cout << " You entered less than a dollar " << endl;
    else if (total > 1.00)
            cout << " You entered more than a dollar " << endl;
    else
        cout << " The amount you entered is invaild " << endl;


}
