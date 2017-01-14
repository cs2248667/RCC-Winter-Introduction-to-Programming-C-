/*
 * File:   main.cpp
 * Author: Collin
 * To calculate the percentage of the federal budget
 * Created on January 13, 2017, 8:12 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){
    float totalBudget = 3.54e+12; 
    float militaryBudget = 5.8e+11;
    float nasaBudget = 18.5e+9;
    float militaryPercentage;
    float nasaPercentage;
    
    militaryPercentage = (militaryBudget / totalBudget) * 100;
    nasaPercentage = (nasaBudget / totalBudget) * 100;
    cout << fixed;
    cout << setprecision(2);
    cout << " The military is given " << militaryPercentage << "% of the "
            " federal budget " << endl;
    cout << " NASA is given " << nasaPercentage << "% of the "
            " federal budget " << endl;
    
    float population2008 = 3.04e+8;
    float population2016 = 3.22e+8;
    float federalDebt2008 = 9.70e+12;
    float federalDebt2016 = 2.00e+13;
    float debtPerPerson2008;
    float debtPerPerson2016;
    
    debtPerPerson2008 = federalDebt2008 / population2008;
    debtPerPerson2016 = federalDebt2016 / population2016;
    
    cout << fixed;
    cout << setprecision(2);
    
    cout << " The federal debt per person in 2008 was $" << debtPerPerson2008 <<
             endl;
    cout << " The federal debt per person in 2016 was $" << debtPerPerson2016 <<
             endl;
            
    return 0;
}

