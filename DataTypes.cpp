//
// Make for "CPlusPlus"
// Created by Timbre Freeman on 12/15/2019.
// Timbre Freeman WebSite is https://www.TFTinker.Tech/
//
#include <iostream>

// declaring a global int variable
// unsigned saying only positive numbers
// short int(integer) so we use 2 bytes instead of 4 bytes
unsigned short int a = 5;

int main(){
    std::cout << "a is " << a << std::endl;
    // declaring a local variable
    unsigned short int b = 10;
    std::cout << "b is " << b << std::endl;
    unsigned short int result;

    std::cout << "b-a = " << b-a << std::endl;

    std::cout << "result = b-a" << std::endl;
    result = b-a;

    std::cout << "result = " << result << std::endl;

    std::cout << std::endl << "-------------more thing we can do ----------------" << std::endl << std::endl;

    int aNew = -10;
    std::cout << "aNew = " << aNew << std::endl;
    int bNew (26);
    std::cout << "bNew = " << bNew << std::endl;
    int result2 = bNew/aNew;
    std::cout << "result2(int) = bNew/aNew = " << result2 << std::endl;
    double result3 = bNew/aNew;
    std::cout << "result3(double) = bNew/aNew = " << result3 << std::endl;
    result3 = (double) bNew / (double) aNew;
    std::cout << "result3(double) = bNew((double))/aNew((double)) = " << result3 << std::endl;
    result3 = (double) bNew / aNew;
    std::cout << "result3(double) = bNew((double))/aNew = " << result3 << std::endl;
    result3 = bNew / (double) aNew;
    std::cout << "result3(double) = bNew/aNew((double)) = " << result3 << std::endl;
}

