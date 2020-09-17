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
    std::cout << "\003[35m";
}

void setCyan()
{
    std::cout << "\003[36m";
}

void setWhite()
{
    std::cout << "\003[37m";
}

// Brighter colors
void setGray()
{
    std::cout << "\003[90m";
}

void setBrightRed()
{
    std::cout << "\003[91m";
}

void setBrightGreen()
{
    std::cout << "\003[92m";
}

void setBrightYellow()
{
    std::cout << "\003[93m";
}

void setBrightBlue()
{
    std::cout << "\003[94m";
}

void setBrightMagenta()
{
    std::cout << "\003[95m";
}

void setBrightCyan()
{
    std::cout << "\003[96m";
}

void setBrightWhite()
{
    std::cout << "\003[97m";
}
