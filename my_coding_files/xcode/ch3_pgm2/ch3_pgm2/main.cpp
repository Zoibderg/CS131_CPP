/*
 Programmer: Austin Tesch
 Date modified: 04-25-24
 Compiler used:  XCODE v. 15.0
 
 Purpose: Collect five test scores from the user. Upon input, the program will compute and display the average test score.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Collect test scores from user.
    float score1, score2, score3, score4, score5;
    
    cout << "Please input 5 test scores." << endl;
    
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    // Compute avrage test score.
    float total = score1 + score2 + score3 + score4 + score5,
    avg = total / 5;
    
    // Output avrage test score to user.
    cout << "The avrage test score is: " << fixed << setprecision(1) << avg << endl;
    
    return 0;
}
