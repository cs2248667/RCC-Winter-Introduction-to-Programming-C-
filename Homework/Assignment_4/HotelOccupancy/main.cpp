

/* 
 * File:   main.cpp
 * Author: Collin
 * To determine the occupancy rate of a hotel
 * Created on January 19, 2017, 9:06 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int floors;
    int roomsOnFloor;
    double rooms;
    int roomsOccupied;
    double totalOccupied;
    float percent;
    
    cout << "Enter the number of floors in the hotel ";
    cin >> floors;
    
    while (floors < 1){
        cout << "Please enter a number greater than 1" << endl;
        cin >> floors;
    }
    
   for (int i = 1; i <= floors; i++){
    
       if (i != 13){
           cout << " Please enter the number of rooms on the floor ";
           cin >> roomsOnFloor;
           while (roomsOnFloor < 10){
               cout << " Please enter a number greater than 10 ";
           cin >> roomsOnFloor;
           }
       }
   
    cout << " How many of the rooms are occupied? ";
    cin >> roomsOccupied;
    
    rooms += roomsOnFloor;
    totalOccupied += roomsOccupied;
     }
         
    percent = (totalOccupied / rooms) * 100;
    cout << " The hotel has " << rooms << " number of room " << endl;
    cout << " The hotel has " << totalOccupied << " occupied rooms " << endl;
    cout << " The hotel has " << rooms - totalOccupied << " unoccupied rooms"
            << endl;
    cout << " The percentage of occupied rooms is " << setprecision(2) << fixed
            << percent << "%" << endl;
            
    
           
    
    
    
    
    
   
    return 0;
   
   }


    
    
    
   