/*
 
 Programmer: Austin Tesch
 Date modified: 05-02-24
 Compiler used:  XCODE v. 15.0
 
 Purpose: A program that prompts the user to input a number between 2 and 11. Use a switch statement to exhibit the corresponding Roman numeral representation of the entered number.
 
    Input Validation: Decide how the program should handle an input that is less than 2 or greater than 11.
 
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Prompt user for input value between 2 and 11
    cout << "Provide a numeral between the values of 2 and 11: " << endl;
    
    int user_numeral;
    cin >> user_numeral;
    
    // Match users number with its corresponding Roman Numeral
    // Use a switch statement
    bool isBwtween = false;
    string roman_numeral;
    
    switch (user_numeral) {
        case 2:
            roman_numeral = "II";
            isBwtween = true;
            break;
        case 3:
            roman_numeral = "III";
            isBwtween = true;
            break;
        case 4:
            roman_numeral = "IV";
            isBwtween = true;
            break;
        case 5:
            roman_numeral = "V";
            isBwtween = true;
            break;
        case 6:
            roman_numeral = "VI";
            isBwtween = true;
            break;
        case 7:
            roman_numeral = "VII";
            isBwtween = true;
            break;
        case 8:
            roman_numeral = "VIII";
            isBwtween = true;
            break;
        case 9:
            roman_numeral = "IX";
            isBwtween = true;
            break;
        case 10:
            roman_numeral = "X";
            isBwtween = true;
            break;
        case 11:
            roman_numeral = "XI";
            isBwtween = true;
            break;
        default:
            cout << "The numeral you provided is not between 2 and 11. Exiting." << endl;
            break;
    }
    
    // Output the corresponding Roman Numeral to the user
    
    if (isBwtween)
    {
        cout << "The Roman Numeral for " << user_numeral << " is: " << roman_numeral << endl;
    }
    
    return 0;
}
