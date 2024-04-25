// Programmer: Austin Tesch
// Purpose: Convert the average amount of ocean level rise from millimeters to both centimeters and inches.
// Date modified: 04-18-24
//Compiler used:  XCODE v. 15.0

#include <iostream>
using namespace std;

int main()
{
    float millimeters = 1.8, centimeters, inches;
    
    centimeters = millimeters * 0.1;
    inches = centimeters * 0.3937;
    
    cout << "The average rise of oecan levels in centimeters: " << centimeters << endl;
    cout << "The average rise of ocean levels in inches: " << inches << endl;
    
    return 0;
}
