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
#include <string>

using namespace std;

int main(){
    
    // init 2 dimensional array (3 x 7)
    // rows represent differnt monkeys (3)
    // columns represnt differnt days of the week (7)
    int const TOTALMONKEYS = 3;
    int const WEEKDAYS = 7;
    
    int food_consumption[TOTALMONKEYS][WEEKDAYS];
    
    int current_monkey;
    int current_monkey_arr[WEEKDAYS];
    
    for (int i = 0; i < TOTALMONKEYS; i++){
        cout << "Food consumed by monkey # " << i + 1 << endl;
        
        for (int j = 0; j < WEEKDAYS; j++){
            cout << "Day # " << j + 1 << endl;
            cin >> food_consumption[i][j];
        }
    }

    
    // determine avrage amout of food eaten per day by whole family of monkeys
    int total_consumption = NULL;
    
    for (int i = 0; i < TOTALMONKEYS; i++)
        for (int j = 0; j < WEEKDAYS; j++)
            total_consumption += food_consumption[i][j];
    
    double family_avarage = total_consumption / WEEKDAYS;
    
    cout << "The monkey family's avarage food consumption is: " << family_avarage << endl;
    
    // determine the least amout of food eaten during the week by any one monkey
    // dertimine the most amout of food eaten during the week by any one monkey
    int least_consumed = NULL, most_consumed = NULL;
    
    for (int i = 0; i < TOTALMONKEYS; i++)
        for (int j = 0; j < WEEKDAYS; j++){
            if (food_consumption[i][j] > most_consumed)
                most_consumed = i;
            
            else if (food_consumption[i][j] < least_consumed)
                least_consumed = i;
        }
    
    cout << "Monkey " << least_consumed + 1 << " consumed the least amount of food." << endl;
    cout << "Monkey " << most_consumed + 1 << " consumed the most amount of food." << endl;
    
    return 0;
}
