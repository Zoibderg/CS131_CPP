/*
 
 Programmer: Austin Tesch
 Date modified: 05-16-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that generates a random number between 1 and 100 and asks the user to guess what the number is.
 - If the user’s guess is higher than the random number, the program should display “Too high. Try again.”
 - If the user’s guess is lower than the random number, the program should display “Too low. Try again.”
 - The program should use a loop that repeats until the user correctly guesses the random number.
 - Then the program should display “Congratulations. You figured out my number.”
 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    // Use time fucntion to create "seed" for random number generation.
    srand(static_cast <unsigned int> (time(NULL)));
    
    // Set MAXIMUM AND MINIMUM
    int const MIN_VALUE = 1;        // Minimum value is probably not nessesary for this application.
    int const MAX_VALUE = 100;
    
    // Generate a random number
    int random_number = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    
    // Prompt user to guess the random number
    int user_input;
    
    cout << "Welcome to the number guessing game! \n"
    << "I've guessed a number between 1 and 100. \n"
    << "Can you guess it?" << endl;
    
    cin >> user_input;
    
    // Validate users number with random number
    // If the user’s guess is higher than the random number, display “Too high. Try again.”
    // If the user’s guess is lower than the random number, display “Too low. Try again.”
    while (user_input != random_number)
    {
        if (user_input > random_number) {
            cout << "Too high. Try again." << endl;
            
            cin >> user_input;
        } else {
            cout << "Too low. Try again." << endl;
            
            cin >> user_input;
        }
    }
    
    // Once user has guessed the correct number, display “Congratulations. You figured out my number.”
    cout << "Congratulations. You figured out my number." << endl;
    
    return 0;
}
