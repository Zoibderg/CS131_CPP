/*
 
 Programmer: Austin Tesch
 Date modified: 05-02-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that prompts the user to enter the names of two primary colors to mix.
 
 If the user enters anything other than “red,” “blue,” or “yellow,” display an error message. 
 Otherwise, display the name of the secondary color produced.
 
 Red, blue, and yellow are classified as primary colors since they cannot be produced by blending other colors.
 Combining two primary colors results in a secondary color: red and blue yield purple, red and yellow produce orange, and blue and yellow form green.

 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    // Prompt user to input 2 primary colors
    cout << "Provide the two primary colors you would like to combine: " << endl;
    
    string primary1, primary2;
    cin >> primary1 >> primary2;
    
    /*
     CHECK THAT THE COLORS PROVIED ARE PRIMARY
     MIX THE COLORS TOGETHER
     OUTPUT THE SECONDARY COLOR TO THE USER
     */
    
    // first primarty chosen is red
    if (primary1 == "red"){
        
        // second primary is blue
        if (primary2 == "blue"){
            cout << "You produced the color purple." << endl;
        }
        
        // second primary is yellow
        else if (primary2 == "yellow"){
            cout << "You produced the color orange." << endl;
        }
        
        // second primary is red
        else if (primary2 == "red"){
            cout << "You combined two of the some color." << endl;
        }
        
        // 'non-primary' provided
        else{
            cout << "The second color provided does not appear to be primary." << endl;
        }
    }
    
    // first primary is blue
    else if (primary1 == "blue"){
        
        //second primary is yellow
        if (primary2 == "yellow"){
            cout << "You produced the color green." << endl;
        }
        
        // second primary is red
        else if (primary2 == "red"){
            cout << "You produced the color purple." << endl;
        }
        
        // second primary is blue
        else if (primary2 == "blue"){
            cout << "You combined two of the some color." << endl;
        }
        
        // 'non-primary' provided
        else{
            cout << "The second color provided does not appear to be primary." << endl;
        }
    }
    
    // first primary is yellow
    else if (primary1 == "yellow"){
        
        // second primary is red
        if (primary2 == "red"){
            cout << "You produced the color orange." << endl;
        }
        
        // second primary is blue
        else if (primary2 == "blue"){
            cout << "You produced the color green." << endl;
        }
        
        // second primary is yellow
        else if (primary2 == "yellow"){
            cout << "You combined two of the same color." << endl;
        }
        
        // 'non-primary' provided
        else{
            cout << "The second color provided does not appear to be primary." << endl;
        }
    }
    
    // 'non-primary' provided
    else{
        cout << "The first color you provided does not appear to be primary." << endl;
    }
    
    return 0;
}
