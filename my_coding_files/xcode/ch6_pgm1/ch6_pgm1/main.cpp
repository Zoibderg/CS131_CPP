/*
 
 Programmer: Austin Tesch
 Date modified: 05-23-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Write a function named "fallingDistance" that accepts an object’s falling time (in seconds) as an argument. 
 The function should return the distance, in meters, that the object has fallen during that time interval.
 
 Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments and displays the return value.
 
 The following formula can be used to determine the distance an object falls due to gravity in a specific time period:

 d=0.5*g*t*t

 The variables in the formula are as follows:
 d is the distance in meters,
 g is 9.8,
 and t is the time in seconds that the object has been falling.

 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double fallingDistance(double fall_time);

double const GRAVITY = 9.8;

int main(){
    // table header
    cout << "Fall time" << setw(20) << "Fall Distance" << endl;
    
    // loop through values 1 -10
    for (int i = 1; i <= 10; ++i){
        // determine distance fallen
        double distance = fallingDistance(i);
        
        // output time and distance to table
        cout << setw(5) << i << setw(20) << distance << endl;
    }
}

double fallingDistance(double fall_time){
    double distance = NULL;
    
    // calculate falling distance in meters
    distance = 0.5 * GRAVITY * pow(fall_time, 2);
    
    return distance;
}
