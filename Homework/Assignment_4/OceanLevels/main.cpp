
/* 
 * File:   main.cpp
 * Author: Collin
 * To display the ocean levels for the next 25 years
 * Created on January 19, 2017, 8:03 PM
 */

#include <iostream>
using namespace std;


int main() {

    double oceanLevel = 0;
    int years = 25;
    
    for (int i = 1; i <= years; i++){
        oceanLevel += 1.5;
        cout << " year " << i << ": " << oceanLevel << "mm " << endl;
                
    }
    
    
    return 0;
}

