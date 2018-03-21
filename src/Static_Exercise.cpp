//============================================================================
// Name        : Static_Exercise.cpp
/*
 * 	-define and output a public static constant
 * 	-define and output a non-static field
 * 	-output a static field with a static method
 * 	-try using both prefix and postfix (++x and x++)
 * 	-try assigning object ID based on static count incremented in constructor
 *
 */
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Cows.h"
using namespace std;

int main()
    {

    Cows one(41, "Tom");
    Cows two(17, "Bill");
    Cows three(147, "Sue");

    one.speak();
    two.speak();
    three.speak();

    two.~Cows();

    Cows four(234, "Joe");
    four.speak();


    return 0;
    }
