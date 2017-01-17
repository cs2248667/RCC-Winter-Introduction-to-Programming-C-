
/* 
 * File:   main.cpp
 * Author: Collin
 * To calculate the amount of seconds in minutes, hours, and days
 * Created on January 16, 2017, 12:12 PM
 */

#include <iostream>
using namespace std;


int main() {

    double seconds;
    double minutes;
    double hours;
    double days;
 
    cout << " Please enter the amount of seconds you will like to calculate ";
    cin >> seconds;
    
    minutes = seconds / 60;
    hours = seconds / 3600;
    days = seconds / 86400;
    
    if (seconds < 60){
        cout << " Invaild number, the amount of seconds must be over 60 " 
                << endl;}
    else if ( seconds >= 60 && seconds < 3600){
        cout << " The amount of seconds you entered is equal to " << minutes 
                << " minutes " << endl;}
    else if ( seconds >= 3600 && seconds < 86400){
        cout << " The amount of seconds you entered is equal to " << hours
                << " hours " << endl;}
    else if (seconds >= 86400){
        cout << " The amount of seconds you entered is equal to " << days 
                << " days " << endl;}
    
   
    
    return 0;
}

