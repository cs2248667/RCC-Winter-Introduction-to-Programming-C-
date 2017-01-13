
/* 
 * File:   main.cpp
 * Author: Collin
 * To Count Calories
 * Created on January 12, 2017, 10:14 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int how_many() {
  int cookies;

  cout << " How many cookies did you consume? ";
  cin >> cookies;

  return cookies;
}

double totalCalories(int cookies) {
  double cookieServings = 30 / 10;
  double calorieServings = 300;
  double total = cookies / cookieServings * calorieServings;

  return total;
}

int main() {
  int cookies = how_many();
  double total = totalCalories(cookies);

  cout << "You consumed " << total << " calories.";

  return 0;
}

