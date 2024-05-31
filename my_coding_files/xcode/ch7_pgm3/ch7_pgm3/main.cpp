/*
 
 Programmer: Austin Tesch
 Date modified: 05-31-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Youth soccer teams earn 3 points for each win, 1 point for each tie, and 0 points for each loss.
 
 Create a teamScore class with variables to hold the teamName and count the number of wins, ties, and losses.
 
 The constructor should accept the team name and initialize the three counters to 0.
 
 The class should have member functions updateWins, updateTies, and updateLosses that each add 1 to the appropriate counter.

 It should also have a displayRecord function that produces a nicely formatted display containing the team name, the number of wins, ties, and losses so far, and the computed points.
 
 Demonstrate the class by creating a menu-driven program that creates a teamScore object and then includes a loop to display a menu and call the appropriate class function depending on the user-entered menu choice.
 
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int const WIN = 3, TIE = 1, LOSS = 0;

void displayMenu(string team_name);

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

void teamScore::displayRecord(teamScore& team_name){
    int total_points = (num_wins * WIN) + (num_ties * TIE);
    
    cout << team_name.team_name << endl;
    cout << team_name.num_wins << endl;
    cout << team_name.num_ties << endl;
    cout << team_name.num_losses << endl;
    cout << total_points << endl;
}

int main(){
    string team_name;
    cout << "Enter team name: " << endl;
    cin >> team_name;
    
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
    
    return 0;
}

void displayMenu(string team_name){
    cout << team_name << endl;
    cout << "-- Menu --" << "\n" << endl;
    cout << "1. Update Wins (add 1 win)" << endl;
    cout << "2. Update Ties (add 1 tie)" << endl;
    cout << "3. Update Losses (add one loss)" << endl;
    cout << "4. Display Team Record" << endl;
}
