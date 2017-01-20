
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine how many miles traveled
 * Created on January 19, 2017, 8:32 PM
 */

#include <iostream>
using namespace std;


int main() {

    int hours;
    int mph;
    int distance;
    
    cout << " What is the speed of the vehicle in mph? ";
    cin >> mph;
    while (mph < 0){
        cout << " Please enter a positive number ";
        cin >> mph;
    }
    
    cout << " How many hours has it traveled? ";
    cin >> hours;

    while (hours < 1){
        cout << " Please enter a number equal or greater than 1 ";
        cin >> hours;
    }
    cout << "\nHour\tDistance Traveled\n";
    cout << "------------------------\n";
    for (int i = 1; i <= hours; i++){
        distance = mph * i;
        cout << i << "\t\t" << distance << endl;
        
     
             
    }
    
    
    
    return 0;
}

