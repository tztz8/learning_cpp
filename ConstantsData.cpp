//
// Make for "CPlusPlus"
// Created by Timbre Freeman on 12/15/2019.
// Timbre Freeman WebSite is https://www.TFTinker.Tech/
//
#include <iostream>

// we cam use a preprocessor command to replace a label with something else
// this is like a variable that can not be changes
#define PI 3.14159265359

int main(){
    std::cout << "the circumference of a unit circle (r = 1) is " << 2*PI*1 << std::endl;
    // we can also set
    const char newline = '\n';
    std::cout << "there is many way to new line" << newline;
    std::cout << "Here is one way \n";
    const int circumference = 2*PI;
    std::cout << circumference << newline;
    //circumference = circumference + 1;
    //std::cout << circumference << newline;
}