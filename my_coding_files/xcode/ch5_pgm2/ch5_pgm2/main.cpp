/*
 
 Programmer: Austin Tesch
 Date modified: 05-15-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that creates a table showing the radius and area for a circle whose radius begins with 1 and continues doubling until it is 8. Use 3.14 for PI.
 
 The formula to compute the area of a circle is -- area = PI*radius*radius
 So if a circle’s radius doubles (i.e., is multiplied by 2), the circle’s area will be four times as large as before.
 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    //Create circle with radius of 1.
    const double PI = 3.14;
    double radius = 1.0;
    
    // Create table header.
    cout << "RADIUS" << setw(15) << "AREA" << endl;
    cout << "----------------------" << endl;

    // Populate table with area and radius for circles until radius is 8.
    double area;
    
    // Increment radius and ouput to table until radius is 8.
    while (radius <= 8)
    {
        area = PI * sqrt(radius);
        
        cout << radius << setw(20) << setprecision(3) << area << endl;
        radius *= 2;
    }
    
    return 0;
}
