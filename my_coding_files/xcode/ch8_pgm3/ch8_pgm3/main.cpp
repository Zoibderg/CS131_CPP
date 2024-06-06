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

using namespace std;

class CharConverter{
    
private:
    
    string new_string_upper;
    string new_string_proper;
    
public:
    
    string upperCase(string user_string){
        // this member function converts a string to all upper case letters

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
    
    string properWords(string user_string){
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
    
};

int main(){
    string test_string = "This is a test string.";
    
    CharConverter convert;
    
    string upper_case_string = convert.upperCase(test_string);
    string proper_string = convert.properWords(test_string);
    
    cout << test_string << endl;
    cout << upper_case_string << endl;
    cout << proper_string << endl;
    
    return 0;
}

