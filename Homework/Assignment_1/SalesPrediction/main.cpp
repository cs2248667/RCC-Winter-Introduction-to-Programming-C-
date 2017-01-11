/* 
  File:   Sales Prediction
  Author: Collin Stewart
  Created on January 9, 2017
  Purpose: Predict Sales
 */
#include <iostream>
using namespace std;


int main() 
{
    double total,
           percent = 0.58,
           sales = 8.6;
    
    total = percent * sales;
    
    cout << " The East Coast sales division will generate "  << total << 
            " million dollars this year" << endl;
            
    
    return 0;
}

