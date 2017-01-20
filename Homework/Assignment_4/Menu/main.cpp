/* 
 * File:   main.cpp
 * Author: Collin
 * The menu of 9 problems
 * Created on January 19, 2017, 11:53 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    char choice;
    

        cout << " Choose from the list " << endl;
        cout << " Type 1 for Average Rainfall " << endl;
        cout << " Type 2 for Calories Burnewd " << endl;
        cout << " Type 3 for Ocean Levels " << endl;
        cout << " Type 4 for Distance Traveled " << endl;
        cout << " Type 5 for Hotel Occupancy " << endl;
        cout << " Type 6 for Membership Fee Increase " << endl;
        cout << " Type 7 for Pennies for Pay " << endl;
        cout << " Type 8 for Population " << endl;
        cout << " Type 9 for Sum Of Numbers " << endl;
        cin >> choice;
    
        switch (choice){
            case '1':{
                int years;
                const int MONTH = 12;
                double rain;
                double totalRain;


                cout << " Please enter the number of years ";
                cin >> years;

                while (years < 1){
                    cout << "Please enter a number equal or greater than 1 ";
                    cin >> years;
                }

                for (int i = 1; i <= years; i++)
                {
                   for (int m = 1; m <= MONTH; m++){
                        cout << " Please enter the amount of rainfall for month " << m << 
                                " ";
                        cin >> rain;

                        while (rain < 0){
                            cout << " Please enter a number greater that 0 ";
                            cin >> rain;
                        }

                        totalRain += rain;

                    }

                }        


                cout << "Number of Months " << years * MONTH << endl;
                cout << " Total inches of rainfall " << totalRain << " inches " << endl;
                cout << " The average rainfall per month " << totalRain / (years * MONTH) 
                        << " inches" << endl;
                }
            case '2':{
                double caloriesBurnedTotal;
                double caloriesBurned = 3.6;

                for (int i = 10; i <= 30; i+=5){
                    caloriesBurnedTotal = caloriesBurned * i;
                    cout << " You have burned " << caloriesBurnedTotal << " in " << i <<
                            " minutes " << endl;
                }
            }
            case '3':{
                    double oceanLevel = 0;
                    int years = 25;

                    for (int i = 1; i <= years; i++){
                        oceanLevel += 1.5;
                        cout << " year " << i << ": " << oceanLevel << "mm " 
                                << endl;
                    }
            }
            case '4':{
                int hours;
                int mph;
                int distance;

                cout << " What is the speed of the vehicle in mph? ";
                cin >> mph;
                while (mph < 0){
                    cout << " Please enter a positive number ";
                    cin >> mph;
                }

                cout << " How many hours has it traveled? ";
                cin >> hours;

                while (hours < 1){
                    cout << " Please enter a number equal or greater than 1 ";
                    cin >> hours;
                }
                cout << "\nHour\tDistance Traveled\n";
                cout << "------------------------\n";
                for (int i = 1; i <= hours; i++){
                    distance = mph * i;
                    cout << i << "\t\t" << distance << endl;
                }
            }
            case '5':{
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
                       cout << " Please enter the number of rooms on the "
                               "floor ";
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
                cout << " The hotel has " << rooms << " number of room " 
                        << endl;
                cout << " The hotel has " << totalOccupied << " occupied rooms " 
                        << endl;
                cout << " The hotel has " << rooms - totalOccupied 
                        << " unoccupied rooms" << endl;
                cout << " The percentage of occupied rooms is " 
                        << setprecision(2) << fixed << percent << "%" << endl;
            }
            case '6':{
                const double INCREASE = 0.04;
                double membership = 2500;

                for ( int i = 1; i <= 6; i++){
                    membership = membership + (membership * INCREASE);
                    cout << " The membership fee in " << i << " years will be " 
                            << membership << endl;
                }
            }
            case '7':{
                int days;
                double money = 0.01;
                double sum;
                double total;
                cout << " Please enter the number of days ";
                cin >> days;

                while (days < 1){
                    cout << " Please pick a number equal to or greater than 1 ";
                    cin >> days;
                }
                for ( int i = 1; i <= days; i++){
                    money *= 2;
                    sum += money;
                    cout << " In " << i << " days " << "you made $" 
                            << money << endl; 
                }
                cout << " your total is " << sum << endl;
                sum += money;
                }
                case '8':{
                    double populationStart;
                int days;
                double increase;
                double populationDay;

                cout << " Enter the starting number of organisms ";
                cin >> populationStart;

                while (populationStart < 2){
                    cout << " Enter another number, The starting population "
                            "should be 2 or above.";
                    cin >> populationStart;
                }

                cout << " Please enter the number of days the population "
                        "will multiply ";
                cin >> days;

                while (days < 1){
                    cout << " Enter another number, The number of days should "
                            "be 1 or above.";
                    cin >> populationStart;
                }

                cout << " Please enter the average daily population increase "
                        "in percentages ";
                cin >> increase;

                while (increase < 1){
                    cout << " Enter another number, The increase should be 0 or"
                            " above.";
                    cin >> increase;
                }

                for (int i = 1; i <= days; i++){
                    populationDay = ((increase / 100)* populationStart) +
                            populationStart;

                    cout << " The population for " << i << " is " << 
                            populationDay << endl;

                populationStart = populationDay;
                }
            }
            case '9':{
                int numberInput;
                int sum = 0;

                cout << " Please enter the amount of numbers you would like "
                        "to add. ";
                cin >> numberInput;

                while ( numberInput < 0){
                    cout << " Please enter a positive number. ";
                    cin >> numberInput;}


                for (int i = 0; i <= numberInput; i++)
                    sum += i;

                cout << " The sum of the numbers are " << sum << endl;
            }
        }
      

    
            
        
    



return 0;
}