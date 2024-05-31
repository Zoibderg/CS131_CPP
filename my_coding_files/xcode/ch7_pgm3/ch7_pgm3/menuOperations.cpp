//
//  menuOperations.cpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//

#include <iostream>

#include "menuOperations.hpp"
#include "teamScore.hpp"

menuOperations menu;

void menuOperations::startMenu(){
    teamScore team(team_name);
    
    int user_choice = NULL;
    do {
        // display menu and watch for input
        displayMenu(team_name);
        cin >> user_choice;
        
        switch (user_choice) {
            case 1:
                // update wins by 1
                team.updateWins();
                break;
                
            case 2:
                // update ties by 1
                team.updateTies();
                break;
                
            case 3:
                //update losses by 1
                team.updateLosses();
                break;
                
            case 4:
                // display team record
                team.displayRecord(team);
                break;
                
            case 5:
                // get new team
                menu.getTeam();
                break;
                
            case 6:
                // exit program
                cout << "Exiting." << endl;
                break;
                
            default:
                // invalid input
                cout << "Invalid input." << endl;
        }
    } while (user_choice != 6);
}
