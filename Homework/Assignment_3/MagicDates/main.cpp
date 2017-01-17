
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine wither a date is magic or not
 * Created on January 16, 2017, 1:27 AM
 */

#include <iostream>
using namespace std;

int main() {

 int date;
 int day;
 int month;
 int year;
 
 
 cout << " It is time to find out if a date is magic or not " << endl;
 cout << " Please enter the day ";
 cin >> day;
 cout << " Please enter the month ";
 cin >> month;
 cout << " Please enter a two digit year ";
 cin >> year;

 date = day * month;

 if ( date == year)
     cout << " The date is magic! " << endl;
 
 else
     cout << "The date is not magic! " << endl;
        
    
    
    
    
    return 0;
}

