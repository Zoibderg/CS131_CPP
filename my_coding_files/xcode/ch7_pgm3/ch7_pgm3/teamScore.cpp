//
//  teamScore.cpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//
#include <iostream>
#include <curses.h>

#include "teamScore.hpp"

int const WIN = 3, TIE = 1;

void teamScore::displayRecord(teamScore& team_name){
    // cacl total points for team
    int total_points = (num_wins * WIN) + (num_ties * TIE);
    
    // display record to user
    cout << "Team: " << team_name.team_name << endl;
    cout << "Total wins: " << team_name.num_wins << endl;
    cout << "Total Ties: " << team_name.num_ties << endl;
    cout << "Total losses: " << team_name.num_losses << endl;
    cout << "Total points: " << total_points << endl;
    cout << "\n------------------------------\n" << endl;
}
