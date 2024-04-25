// Programmer: Austin Tesch
// Purpose: Determine the total amount of paint required to cover a surface.
// Date modified: 04-18-24
//Compiler used:  XCODE v. 15.0

#include <iostream>
using namespace std;

int main()
{
    float covrage_gallon = 340, surface_height, surface_length, total_area;
    
    // Get height of surface.
    cout << "What is the total height of the surface (in feet)? ";
    cin >> surface_height;
    
    // Get length of surface.
    cout << "What is the total lenght/width of the surface (in feet)? ";
    cin >> surface_length;
    
    // Total area of surface; height * length
    total_area = surface_height * surface_length;
    
    // Determine amout of paint required for first and second coat.
    float first_coat = total_area / covrage_gallon;
    float second_coat = first_coat * 2;
    
    // Display amout of paint required.
    cout << "You will need " << second_coat << " gallons of paint to apply 2 coats to your surface." << endl;
    
    return 0;
}
