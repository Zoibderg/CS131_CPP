/*
 
 Programmer: Austin Tesch
 Date modified: 05-32-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Write a program that demonstrates the Coin class. The program should create an instance of the class and display the side that is initially facing up. 
 
 Then, use a loop to toss the coin 20 times. Each time the coin is tossed, display the side that is facing up.
 
 The program should keep count of the number of times heads is facing up and the number of times tails is facing up, and display those values after the loop finishes.
 
 Write a class named Coin. The Coin class should have the following member variable:
 A string named sideUp. The sideUp member variable will hold either “heads” or “tails” indicating the side of the coin that is facing up.

 The Coin class should have the following member functions:
 A default constructor that randomly determines the side of the coin that is facing up (“heads” or “tails”) and initializes the sideUp member variable accordingly.

 A void member function named "toss" simulates the tossing of the coin. When the toss member function is called, it randomly determines the side of the coin that is facing up (“heads” or “tails”) and sets the sideUp member variable accordingly.

 A member function named getSideUp returns the value of the sideUp member variable.
 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Coin {
private:
    string sideUp;

public:
    // Default constructor that randomly sets the sideUp variable
    Coin() {
        toss();
    }

    // simulate tossing the coin
    void toss() {
        int randomValue = rand() % 2; // Generate 0 or 1
        if (randomValue == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    // return the value of sideUp
    string getSideUp() {
        return sideUp;
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    Coin myCoin;
    int headsCount = 0;
    int tailsCount = 0;

    // Display the initial side facing up
    cout << "Initial side up: " << myCoin.getSideUp() << endl;

    // Toss the coin 20 times
    for (int i = 0; i < 20; ++i) {
        myCoin.toss();
        string result = myCoin.getSideUp();
        cout << "Toss " << i + 1 << ": " << result << endl;

        // Update the counts
        if (result == "heads") {
            ++headsCount;
        } else {
            ++tailsCount;
        }
    }

    // Display the final counts
    cout << "\n ----------------------------- \n" << endl;
    cout << "Final counts: " << endl;
    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
