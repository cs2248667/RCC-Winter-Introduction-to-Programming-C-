
/* 
 * File:   main.cpp
 * Author: Collin
 * To determine which rectangle has a greater area
 * Created on January 16, 2017, 1:41 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    double length1;
    double width1;
    double area1;
    double length2;
    double width2;
    double area2;
    
    cout << " Please enter the length of the first rectangle ";
    cin >> length1;
    cout << " Please enter the width of the first rectangle ";
    cin >> width1;
    area1 = length1 * width1;
    
    cout << " Please enter the length of the second rectangle ";
    cin >> length2;
    cout << " Please enter the width of the second rectangle ";
    cin >> width2;
    area2 = length2 * width2;
    
    if (area1 == area2)
        
        cout << " The rectangles have the same area " << endl;
    
    else if (area1 > area2)
    {    
        cout << " The first rectangle has a larger area than the second " << 
                endl; }
    
    else if (area1 < area2)
    {
        cout << " The second rectangle has a larger area than the first " << 
                endl;}

  
    
    return 0;
}

