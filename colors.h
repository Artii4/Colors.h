#include <iostream>
#include <string>

// This is a Color library for outputting text with colors
// The library consists of functions that set colors, without the user having to enter escape codes manually

// The layout is simple - To set a color, write "set", and then the color.
// For example, "setBlack()" sets the color to be black

void setBlack()
{
    std::cout << "\033[30m";
}

void setRed()
{
    std::cout << "\033[31m";
}

void setGreen()
{
    std::cout << "\033[32m";
}

void setYellow()
{
    std::cout << "\033[33m";
}

void setBlue()
{
    std::cout << "\033[34m";
}

void setMagenta()
{
    std::cout << "\033[35m";
}

void setCyan()
{
    std::cout << "\033[36m";
}

void setWhite()
{
    std::cout << "\033[37m";
}

// Brighter colors
void setGray()
{
    std::cout << "\033[90m";
}

void setBrightRed()
{
    std::cout << "\033[91m";
}

void setBrightGreen()
{
    std::cout << "\033[92m";
}

void setBrightYellow()
{
    std::cout << "\033[93m";
}

void setBrightBlue()
{
    std::cout << "\033[94m";
}

void setBrightMagenta()
{
    std::cout << "\033[95m";
}

void setBrightCyan()
{
    std::cout << "\033[96m";
}

void setBrightWhite()
{
    std::cout << "\033[97m";
}
