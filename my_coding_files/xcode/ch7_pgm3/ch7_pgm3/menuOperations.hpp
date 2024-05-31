//
//  menuOperations.hpp
//  ch7_pgm3
//
//  Created by Austin Tesch on 5/31/24.
//

#ifndef menuOperations_hpp
#define menuOperations_hpp

#include <iostream>

using namespace std;

class menuOperations{
    string team_name;
    
public:
    
    void getTeam(){
        cout << "Enter team name: " << endl;
        cin >> team_name;
    }
    
    void displayMenu(string team_name){
        cout << team_name << endl;
        cout << "-- Menu --" << "\n" << endl;
        cout << "1. Update Wins (add 1 win)" << endl;
        cout << "2. Update Ties (add 1 tie)" << endl;
        cout << "3. Update Losses (add one loss)" << endl;
        cout << "4. Display Team Record" << endl;
    }
    
    // init
    void startMenu();
};

#endif /* menuOperations_hpp */
