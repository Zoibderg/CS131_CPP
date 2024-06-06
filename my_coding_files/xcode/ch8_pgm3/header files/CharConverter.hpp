/*
 Programmer: Austin Tesch
 Date modified: 6/6/24
 Compiler used:  XCODE v. 15.0

*/

#ifndef CharConverter_hpp
#define CharConverter_hpp

#include <string>

using namespace std;

class CharConverter{
    
private:
    
    string new_string_upper;
    string new_string_proper;
    
public:
    
    string upperCase(string);
    string properWords(string);
    
};

#endif /* CharConverter_hpp */
