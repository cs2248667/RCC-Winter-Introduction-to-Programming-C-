

/* 
 * File:   main.cpp
 * Author: Collin
 * To help teach math
 * Created on January 16, 2017, 10:38 PM
 */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main() {
    
    double num1;
    double num2;
    double sum;
    double answer; 
    unsigned seed = time(0);
    srand(seed);
    num1 = 100 + rand() % 999;
    num2 = 100 + rand() % 999;
    sum = num1 + num2;
    
    cout << " Math Tutor " << endl;
    cout << setw(6) << num1 << endl;
    cout << " + " << num2 << endl;
    cout << " ------ " << endl;
    
    cout << "Press enter your answer " << endl;
    cin >> answer;
    
    if (answer == sum)
        cout << " Congratulations, you are correct! " << endl;
    else
        cout << " The correct answer was " << sum << " Pleas try again "
                << endl;
    
   
    
    
    
    
    return 0;
}

