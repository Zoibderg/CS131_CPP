/*
 Programmer: Austin Tesch
 Date modified: 6/6/24
 Compiler used:  XCODE v. 15.0

ch8_pgm3

*/

#include "CharConverter.hpp"

string CharConverter::properWords(string user_string){
    // this member function converts the first letter of each word to uppercase
    new_string_proper = user_string;
    bool new_word = true;       // first word of string will always be toupper
    
    for (int i = 0; i < user_string.length(); i++){     // iterate through each char in the string
        
        if (isspace(user_string[i])){
            // space detected, new word, flag true
            new_word = true;
        }
        else if (new_word){
            // first char of new word toupper
            new_string_proper[i] = toupper(user_string[i]);
            new_word = false;
        }
    }
    
    // return new string in proper word form
    return new_string_proper;
    
}

string CharConverter::upperCase(string user_string){
    // this member function converts a string to all upper case letters
    
    // clear string to prevent the last string from lingering.
    new_string_upper = "";

    for (int i = 0; i < user_string.length(); i++){     // iterate through each char in the string
        
        if (isalpha(user_string[i])){
            // this char is a letter
            
            if (!isupper(user_string[i])){
                // this char is lowercase, convert to uppercase
                char new_upper = toupper(user_string[i]);
                new_string_upper += new_upper;
            }
            
            else {
                // this char is already upper case
                new_string_upper += user_string[i];
            }
        }
        else {
            // this char is a digit, space, or puncuation, leave it alone
            new_string_upper += user_string[i];
        }
    }
    
    // return the new string with all upper case letters
    return new_string_upper;
}
