// Programmer: Austin Tesch
// Purpose: A program to determine the total distance this car can travel on a full tank.
// Date modified: 00-00-00
//Compiler used:  XCODE v. 15.0

#include <iostream>
using namespace std;

int main()
{
    int full_tank = 10;
    float mpg_town = 27.5, mpg_highway = 32.7,
    range_town, range_highway;
    
    range_town = mpg_town * full_tank;
    range_highway = mpg_highway * full_tank;
    
    cout << "Total range in town is: " << range_town << " miles." << endl;
    cout << "Total range on highway is: " << range_highway << " miles." << endl;
    
    return 0;
}
