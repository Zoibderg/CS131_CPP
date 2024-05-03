/*
 
 Programmer: Austin Tesch
 Date modified: 05-02-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that asks the user to enter a year and then reports when the next leap year will be.
 
 Here is how we decide on a leap year:
 
 If it is divisible by 400, it is a leap year

 else if it is divisible by 100, it is NOT a leap year

 else If it is divisible by 4, it is s leap year
 
 */

#include <iostream>
using namespace std;

int main(){
    // prompt user for a year
    cout << "Provied a year and I will tell you when the next leap year will be: " << endl;
    
    int user_year, leap_year;
    cin >> user_year;
    
    leap_year = user_year;
    
    // start check at next year
    leap_year++;
    
    // keep track of increments
    int increment = 0;
    
    // calculate next year that is multiple of 4
    if (leap_year % 4 != 0){
        increment = 4 - (leap_year % 4);
    }
    
    // adjust year to next multiple of 4
    leap_year += increment;
    
    // exclude century years that are not leap years
    if ((leap_year % 100 == 0) && (leap_year % 400 != 0)){
        // skip to next possible leap year
        leap_year += 4;
    }
    
    // output when the next leap year will be
    cout << "The next leap year following the year " << user_year << " will be in the year: " << leap_year << endl;
    
    return 0;
}
