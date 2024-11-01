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
    // Set floor values.
    int lowest_floor = 10, highest_floor = 16;
    int total_floors = highest_floor - lowest_floor;
    int const SUITES_PER_FLOOR = 20;
    
    int const TOTAL_SUITES = total_floors * SUITES_PER_FLOOR;
    int occupied_suites = 0;
    
    // Iterate thorugh floors.
    int floor, user_input;
    
    for (floor = lowest_floor; floor <= highest_floor; ++floor){
        // No 13th floor, skip.
        if (floor == 13)
            continue;
        
        do {
            // Prompt user for total number of occupied floors.
            cout << "Enter the number of occupied suites on floor " << floor << ": " << endl;
            cin >> user_input;
            
            // Validate input.
            if (user_input < 0 || user_input > 20){
                cout << "Input invalid." << endl;
            }
        } while (user_input < 0 || user_input > 20);
        
        // User supplied valid input, move to next floor.
        occupied_suites += user_input;
    }
    
    // Display total number of suites avaliable
    int suites_avaliable = TOTAL_SUITES - occupied_suites;
    
    cout << "The top 5 floors of the hotel has " << TOTAL_SUITES << " avaliable suites." << endl;
    
    // Display percentage of occupied suites
    double (occupancy_rate) = (static_cast<double>(occupied_suites) / TOTAL_SUITES) * 100.0;
    
    cout << occupancy_rate << "% of the top floor suites are unavaliable." << endl;
    
    // Display occupied and unoccupied numbers.
    cout << occupied_suites << " occupied / " << suites_avaliable << " avaliable" << endl;
    
    return 0;
}
