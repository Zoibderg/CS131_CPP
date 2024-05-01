/*
 
 Programmer: Austin Tesch
 Date modified: 04-25-24
 Compiler used:  XCODE v. 15.0
 
 Purpose: A program to calculate the number of slices a pizza of any size can be divided into.
 
 Ask the user for the diameter of the pizza in inches.
 Divide the diameter by 2 to get the radius.
 Calculate the number of slices that may be taken from a pizza of that size if each slice has an area of 12.789 square inches.
 Display a message telling the number of slices.

 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14, SLICE = 12.789;
    
    // Ask user for the diameter of the pizza in inches.
    float pizza_diameter;
    
    cout << "What is the diameter of your pizza (in inches)?" << endl;
    
    cin >> pizza_diameter;
    
    // Calculate the number of slices that may be taken.
    // Each slice has an area of 12.789 inches.
    float 
    pizza_radius = pizza_diameter / 2,
    pizza_area = PI * pow(pizza_radius, 2);
    
    int total_slices = pizza_area / SLICE;
    
    // Output a message telling the user the number of slices.
    cout << "You can cut your pizza into " << total_slices << " whole slices." << endl;
    
    return 0;
}
