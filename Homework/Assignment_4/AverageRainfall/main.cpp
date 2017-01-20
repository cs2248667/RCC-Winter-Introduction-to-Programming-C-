
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate the average rainfall
 * Created on January 19, 2017, 9:44 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int years;
    const int MONTH = 12;
    double rain;
    double totalRain;
    
    
    cout << " Please enter the number of years ";
    cin >> years;
    
    while (years < 1){
        cout << "Please enter a number equal or greater than 1 ";
        cin >> years;
    }
    
    for (int i = 1; i <= years; i++)
    {
       for (int m = 1; m <= MONTH; m++){
            cout << " Please enter the amount of rainfall for month " << m << 
                    " ";
            cin >> rain;
            
            while (rain < 0){
                cout << " Please enter a number greater that 0 ";
                cin >> rain;
            }
            
            totalRain += rain;
        
        }
        
    }        
        
    
    cout << "Number of Months " << years * MONTH << endl;
    cout << " Total inches of rainfall " << totalRain << " inches " << endl;
    cout << " The average rainfall per month " << totalRain / (years * MONTH) 
            << " inches" << endl;
    
    
    
        
        
        
        
        
        
        
        
        
        
    
    return 0;
}

