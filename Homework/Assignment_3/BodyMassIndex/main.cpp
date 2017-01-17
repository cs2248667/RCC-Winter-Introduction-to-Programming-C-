
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate a person's BMI
 * Created on January 16, 2017, 2:03 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double BMI;
    double weight;
    double height;
           
    cout << " Lets caluculate your BMI " << endl;
    cout << " Please enter your body weight in pounds ";
    cin >> weight;
    cout << " Please enter your height in inches ";
    cin >> height;
    cout << setprecision(2);
    cout << fixed;
    
    BMI = weight * 703 / pow(height,2);
    
    if (BMI < 18.5)
        cout << " Your BMI is " << BMI << ". You are underweight " << endl;
    
    else if (BMI >= 18.5 && BMI <= 25)
      cout << " Your BMI is " << BMI << ". You are at optimal weight " << endl;
    
    else if (BMI > 25)
       cout << " Your BMI is " << BMI << ". You are overweight " << endl; 
    
    
    
    
    
    return 0;
}

