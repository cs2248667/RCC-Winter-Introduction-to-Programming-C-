
/* 
 * File:   main.cpp
 * Author: Collin
 * To predict the size of the population
 * Created on January 19, 2017, 10:46 PM
 */

#include <iostream>

using namespace std;

int main() 
{

    double populationStart;
    int days;
    double increase;
    double populationDay;
    
    cout << " Enter the starting number of organisms ";
    cin >> populationStart;
    
    while (populationStart < 2){
        cout << " Enter another number, The starting population should be 2 "
                "or above.";
        cin >> populationStart;
    }
    
    cout << " Please enter the number of days the population will multiply ";
    cin >> days;
    
    while (days < 1){
        cout << " Enter another number, The number of days should be 1 or"
                " above.";
        cin >> populationStart;
    }
    
    cout << " Please enter the average daily population increase in "
            "percentages ";
    cin >> increase;
    
    while (increase < 1){
        cout << " Enter another number, The increase should be 0 or"
                " above.";
        cin >> increase;
    }
    
    for (int i = 1; i <= days; i++){
        populationDay = ((increase / 100)* populationStart) + populationStart;
        
        cout << " The population for " << i << " is " << populationDay << endl;
    
    populationStart = populationDay;
    }
        
    
  
    
    return 0;
}

