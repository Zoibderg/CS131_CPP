//
//  teamScore.hpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//

#ifndef teamScore_hpp
#define teamScore_hpp

#include <string>

using namespace std;

class teamScore{
    string team_name;
    int num_wins, num_ties, num_losses;
    
public:
    // constructor
    teamScore(const string& team) :
    team_name(team), num_wins(0), num_ties(0), num_losses(0) {}
    
    void updateWins(){
        num_wins++;
    }
    
    void updateTies(){
        num_ties++;
    }
    
    void updateLosses(){
        num_losses++;
    }
    
    // init
    void displayRecord(teamScore& team_name);
};

#endif /* teamScore_hpp */
