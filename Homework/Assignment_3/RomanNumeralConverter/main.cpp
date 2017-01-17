
/* 
 * File:   main.cpp
 * Author: Collin
 * To convert numbers into roman numerals
 * Created on January 16, 2017, 1:10 AM
 */

#include <iostream>
using namespace std;


int main() 
{
    int number;
    int roman;
    
    cout << " Please enter a number between 1 and 10 and it will be converted "
            " to Roman Numerals ";
    cin >> number;
    
    switch (number){
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;           
        case 6:
            cout << "VI";
            break; 
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
        default: cout << " Invaild Number. ";
            break;  
    }
         
  
    
    return 0;
}

