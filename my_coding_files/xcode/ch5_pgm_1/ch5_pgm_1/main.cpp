/*
 
 Programmer: Austin Tesch
 Date modified: 05-15-24
 Compiler used:  XCODE v. 15.0
 
 Purpose: 
 A program that asks the user for a positive integer value and that uses a loop to validate the input.
 
 The program should then use a second loop to compute the sum of all the integers from 1 up to the number entered.
 
 For example, if the user enters 20, the loop will find the sum of 1+2+3+4+5+6+7+8+9+…17+18+19+20.

 */

#include <iostream>
using namespace std;

int main (){
    
    // Ask user for a positive integer value.
    float input_value;
    
    cout << "Provide a positive integer: " << endl;
    cin >> input_value;
    
    // Validate users input.
    // If user input is not positive, ask again for positive integer.
    while (input_value <= 0)
    {
        cout << "It seems the number provided is not positive, please provide a positive integer: " << endl;
        cin >> input_value;
    }
    
    // User input is valid.
    // Compute sum of all integers from 1 up to the users number.
    int counter = 1, final_sum = 0;
    
    while (counter <= input_value)
    {
        final_sum += counter;
        counter++;
    }
    
    // Return sum of integers to user.
    cout << "The sum of all leading integers is: " << final_sum << endl;
    
    return 0;
}
