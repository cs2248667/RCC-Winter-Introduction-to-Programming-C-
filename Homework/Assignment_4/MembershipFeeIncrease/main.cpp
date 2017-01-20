
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine the membership fee for six years
 * Created on January 19, 2017, 8:19 PM
 */

#include <iostream>
using namespace std;

int main() {
    
    const double INCREASE = 0.04;
    double membership = 2500;
    
    for ( int i = 1; i <= 6; i++){
        membership = membership + (membership * INCREASE);
        cout << " The membership fee in " << i << " years will be " << 
                membership << endl;
    }
    
    
    
    
    return 0;
}

