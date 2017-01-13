/* 
 * File:   main.cpp
 * Author: Collin
 * Created on January 11, 2017, 10:06 PM
 * *Find the average test score
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main() 

{
    double score1, score2, score3, score4, score5, average;
    cout <<" Enter the first test score ";
    cin >> score1;
    cout <<" Enter the second test score ";
    cin >> score2;
    cout <<" Enter the third test score ";
    cin >> score3;
    cout << " Enter the fourth test score ";
    cin >> score4;
    cout << " Enter the fifth test score ";
    cin >> score5;
    average = (score1 + score2 + score3 + score4 + score5)/5;
    cout << setprecision(1) << fixed;
    cout << " The test score average is " << average << endl;
            
    
    
    return 0;
}

