//
//  menuOperations.cpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//

#include <iostream>

#include "menuOperations.hpp"
#include "teamScore.hpp"

void menuOperations::startMenu(){
    teamScore team(team_name);
    
    int user_choice = NULL;
    do {
        displayMenu(team_name);
        cin >> user_choice;
        
        switch (user_choice) {
            case 1:
                team.updateWins();
                break;
                
            case 2:
                team.updateTies();
                break;
                
            case 3:
                team.updateLosses();
                break;
                
            case 4:
                team.displayRecord(team);
                break;
                
            case 5:
                cout << "Exiting." << endl;
                break;
                
            default:
                cout << "Invalid input." << endl;
        }
    } while (user_choice != 5);
}
