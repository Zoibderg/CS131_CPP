/*
 Programmer: Austin Tesch
 Date modified: 6/6/24
 Compiler used:  XCODE v. 15.0

 Purpose:
 Create a "CharConverter" class that performs various operations on strings. It should have the following two public member functions to start with.

 -The "uppercase" member function accepts a string and returns a copy of it with all lowercase letters converted to uppercase. 
 If a character is already uppercase or is not a letter, it should be left alone.

 -The "properWords" member function accepts a string of words separated by spaces and returns a copy of it with the first letter of each word converted to uppercase.

 Write a simple program that uses the class. It should prompt the user to input a string. Then it should call the "properWords" function and display the resulting string. Finally, it should call the uppercase function and display this resulting string. The program should loop to allow additional strings to be converted and displayed until the user chooses to quit.

*/

#include <iostream>
#include <string>
#include "CharConverter.hpp"

using namespace std;

int main(){
    CharConverter convert;
    
    string input_string;
    
    do {
        // always collect at least one string
        cout << "\nProvied a string for conversion or \"Q\" to quit." << endl;
        getline(cin, input_string);
        
        if (input_string == "Q" || input_string == "q") {
            cout << "Exiting program." << endl;
            break;
        }
        
        // convert strings and output
        cout << "Your string converted to all uppper case: " << convert.upperCase(input_string) << endl;
        cout << "Your string converted to \"Proper Case\": " << convert.properWords(input_string) << endl;
        
    } while (true);       // user has quit program

    return 0;
}

