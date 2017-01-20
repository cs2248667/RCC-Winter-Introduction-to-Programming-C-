
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate how many calories have been burned
 * Created on January 19, 2017, 8:12 PM
 */

#include <iostream>
using namespace std;



int main() {

    double caloriesBurnedTotal;
    double caloriesBurned = 3.6;
    
    for (int i = 10; i <= 30; i+=5){
        caloriesBurnedTotal = caloriesBurned * i;
        cout << " You have burned " << caloriesBurnedTotal << " in " << i <<
                " minutes " << endl;
    }
        
    
    
    
    
    
    return 0;
}

