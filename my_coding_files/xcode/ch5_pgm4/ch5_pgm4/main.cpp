/*
 
 Programmer: Austin Tesch
 Date modified: 05-16-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that calculates the occupancy rate of the 120 suites (20 per floor) located on the top six floors of a 15-story luxury hotel.
 These are floors 10–12 and 14–16 because, like many hotels, there is no 13th floor.
 
 Solve the problem by using a single loop that iterates once for each floor between 10 and 16 and, on each iteration, asks the user to input the number of suites occupied on that floor.
 Use a nested loop to validate that the value entered is between 0 and 20.
 
 After all the iterations, the program should display how many suites the hotel has, how many of them are occupied, and what percentage of them are occupied.

 */

#include <iostream>
using namespace std;

int main(){
    // Set floors
    int lowest_floor = 10, highest_floor = 16;
    
    int const TOTAL_SUITES = 120;
    int occupied_suites = 0;
    
    // Iterate thorugh floors
    int current_floor = lowest_floor;
    
    while (current_floor <= highest_floor)
    {
        if (current_floor == 13){
            continue;
        }
        
        // Promt user for number off occupied suites on current floor
        cout << "How many suites are occupied on floor " << current_floor << "?" << endl;
        
        int user_input;
        cin >> user_input;      // Store input for validation
        
        // Validate input
        while (user_input < 0 || user_input > 20){
            cout << "Invalid input."
            << "How many suites are occupied on floor " << current_floor << "?" << endl;
            
            cin >> user_input;
        }
        
        occupied_suites += user_input;
    }
    
    // Display total number of suites avaliable
    int suites_avaliable = TOTAL_SUITES - occupied_suites;
    
    cout << "The top 5 floors of the hotel has " << suites_avaliable << " avaliable suites." << endl;
    
    // Display occupied suites
    cout << occupied_suites << " of them are occupied." << endl;
    
    // Display percentage of occupied suites
    
    return 0;
}
