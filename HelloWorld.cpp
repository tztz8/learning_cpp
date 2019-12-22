/*
#--------------------------------------#
| Name: Timbre Freeman                 |
| Project: Hello World                 |
| Description: Trying thing out in c++ |
#--------------------------------------#
*/

/*
 * this is a mullty line comment
 */
// this is a one line comment

// # is telling the compiler to do something before look at the code
// include the compiler to copy the file in to this file before ruining
// <iosstream> is a standard library for using input-output
#include <iostream>

// say we are going to use the namespace std
//using namespace std;

// when this program is called it first run main and
// we can return 0 as a int(Integer) if there was no problems running
int main() {

    // this is where we call cout(console out) from the iostream libray using the namespace std
    // we us << to push the string(array of char(Character)) "Hello, World!"
    // we than us another << and we call endl(end line) from iostream to get the correct character for a new line in the namespace std
    std::cout << "Hello, World!" << std::endl;

    // we return 0 to say no problems encountered
    return 0;
}