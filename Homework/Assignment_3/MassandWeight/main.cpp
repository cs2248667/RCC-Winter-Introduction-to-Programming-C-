
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate the weight of an object
 * Created on January 16, 2017, 12:01 PM
 */

#include <iostream>
using namespace std;

int main() {
    double weight;
    double mass;
    
    cout << " This program will calculate the weight of an object " << endl;
    cout <<  " Please enter the object's mass in kilograms ";
    cin >> mass;
    weight = mass * 9.8;
    if (weight > 100)
        cout << " The object is too heavy " << endl;
    else if (weight < 10)
        cout << " The object is too light " << endl;
    else 
        cout << " The weight of your object is " << weight << endl;
     
    
    
    
    
    
    
    
    return 0;
}

