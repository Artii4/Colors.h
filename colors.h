#include <iostream>
#include <string>

// This is a Color library for outputting text with colors
// The library consists of functions that set colors, without the user having to enter escape codes manually

void setRed()
{
    std::cout << "\033[31m";
}
