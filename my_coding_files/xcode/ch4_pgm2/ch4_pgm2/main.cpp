/*
 
 Programmer: Austin Tesch
 Date modified: 05-02-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A change-counting game that asks the user to enter what coins to use to make exactly fifty cents.
 The program should ask the user to enter the number of pennies, nickels, dimes, and quarters.
 If the total value of the coins entered is equal to fifty cents, the program should congratulate the user for winning the game.
 Otherwise, the program should display a message indicating whether the amount entered was more or less than fifty cents. 
 
 Use constant variables to hold the coin values.
 
 */

#include <iostream>
using namespace std;

int main()
{
    // Set constants for coin values
    const int PENNIE_VALUE = 1,
    NICKEL_VALUE = 5,
    DIME_VALUE = 10,
    QUARTER_VALUE = 25,
    TARGET_AMOUNT = 50;
    
    // Introduce game and check that the user is ready to play.
    cout << "Provied me with 50 cents!\n"
    << "You will be asked to input any of the following coins:\n"
    << "Pennies, Nickels, Dimes, and Quarters\n"
    << "Are you ready to play? (y/n)" << endl;
    
    char play_response;
    bool readyToPlay = false;
    
    cin >> play_response;
    if (play_response == 'y'){
        readyToPlay = true;
    }
    
    if (readyToPlay){
        // Values of user input
        int amount_pennies, amount_nickels, amount_dimes, amount_quarters;
        
        cout << "Great! Let's play!" << endl;
        
        // Prompt pennies
        cout << "Select amount of Pennies: " << endl;
        cin >> amount_pennies;
        
        // Prompt nickels
        cout << "Select amount of Nickels: " << endl;
        cin >> amount_nickels;
        
        // Prompt dimes
        cout << "Select amount of Dimes: " << endl;
        cin >> amount_dimes;
        
        // Prompt quarters
        cout << "Select amount of Quarters: " << endl;
        cin >> amount_quarters;
        
        // Compute user total
        int user_coin_total =
        (amount_pennies * PENNIE_VALUE) +
        (amount_nickels * NICKEL_VALUE) +
        (amount_dimes * DIME_VALUE) +
        (amount_quarters * QUARTER_VALUE);
        
        if (user_coin_total == TARGET_AMOUNT){
            cout << "Thats exactly 50 cents! Congratulations!" << endl;
        }
        else if (user_coin_total > TARGET_AMOUNT){
            cout << "Your total value is too high, you gave me " << user_coin_total << " cents! Try again!" << endl;
        }
        else
            cout << "Your total is too low, you gave me " << user_coin_total << " cents! Try again!" << endl;
        
    }
    
    else
        // User does not want to play
        cout << "Okay, lets play sometime!" << endl;;
        
    return 0;
}
