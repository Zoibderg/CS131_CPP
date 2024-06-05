/*
 
 Programmer: Austin Tesch
 Date modified: 06-05-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Create a program with a function that accepts three arguments: an integer array, an integer size that indicates how many elements are in the array, and an integer n.
 
 The function should display all of the numbers in the array that are greater than the number n.
 
 */

#include <iostream>

using namespace std;

void greaterNumbers(const int [], const int, int);

int main(){
    // init array with size of 5
    int const ISIZE = 5;
    int array[ISIZE] {2, 4, 6, 8, 10};
    
    // init check number
    int checkInt = 5;
    
    // check numbers in array that are greater than check number
    greaterNumbers(array, ISIZE, checkInt);

    return 0;
}

void greaterNumbers(const int array[], const int size, int check){
    // iterate through array
    for (int i = 0; i < size; i++)
        // check if current element is greater than checkint
        if (array[i] > check)
            // number is greater
            cout << array[i] << " is greater than " << check << endl;
}
