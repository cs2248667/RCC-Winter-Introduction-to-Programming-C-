/* 
  File: Average Of Values
  Author: Collin Stewart
  Created on January 9, 2017, 
  Purpose:  Get Average
 */

#include <iostream>
using namespace std;


int main() 
{
    float num1 = 28,
          num2 = 32,
          num3 = 37,
          num4 = 24,
          num5 = 33,
          sum,
          average;
    
    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;
    
    cout <<" The sum of the 5 numbers is " << sum << endl;
    cout <<" The average of the 5 numbers is " << average << endl;
    
    
    return 0;
}

