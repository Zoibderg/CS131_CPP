/*
 Programmer: Austin Tesch
 Date modified: 6/5/24
 Compiler used:  XCODE v. 15.0

 Purpose:
 
 A local zoo wants to keep track of how many pounds of food each of its three monkeys eats each day during a typical week. 
 
 Write a program that stores this information in a two-dimensional 3×7 array, where each row represents a different monkey and each column represents a different day of the week.
 
 The program should first have the user input the data for each monkey. Then it should create a report that includes the following information:

 -The average amount of food eaten per day by the whole family of monkeys

 -The least amount of food eaten during the week by any one monkey

 -The greatest amount of food eaten during the week by any one monkey

*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MONKEYS = 3;
const int DAYS = 7;

int main() {
    double food[MONKEYS][DAYS];
    double totalFood = 0;
    double minFood, maxFood;

    // Input the food data
    for (int i = 0; i < MONKEYS; ++i) {
        cout << "Enter the amount of food eaten by monkey " << i + 1 << " each day of the week:\n";
        
        for (int j = 0; j < DAYS; ++j) {
            cout << "Day " << j + 1 << ": ";
            cin >> food[i][j];
            totalFood += food[i][j];
        }
    }

    // Calculate average food per day
    double avgFoodPerDay = totalFood / (MONKEYS * DAYS);

    // Find the minimum and maximum food eaten
    minFood = maxFood = food[0][0];
    for (int i = 0; i < MONKEYS; ++i) {
        
        for (int j = 0; j < DAYS; ++j) {
            
            // new min consumption
            if (food[i][j] < minFood) {
                minFood = food[i][j];
            }
            
            // new max consumption
            if (food[i][j] > maxFood) {
                maxFood = food[i][j];
            }
        }
    }

    // Report the results
    cout << fixed << setprecision(2);
    cout << "\nAverage amount of food eaten per day by the whole family of monkeys: " << avgFoodPerDay << " pounds\n";
    cout << "Least amount of food eaten during the week by any one monkey: " << minFood << " pounds\n";
    cout << "Greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds\n";

    return 0;
}
