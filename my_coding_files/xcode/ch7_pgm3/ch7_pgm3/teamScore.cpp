//
//  teamScore.cpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//
#include <iostream>

#include "teamScore.hpp"

int const WIN = 3, TIE = 1;

void teamScore::displayRecord(teamScore& team_name){
    int total_points = (num_wins * WIN) + (num_ties * TIE);
    
    cout << team_name.team_name << endl;
    cout << team_name.num_wins << endl;
    cout << team_name.num_ties << endl;
    cout << team_name.num_losses << endl;
    cout << total_points << endl;
}
