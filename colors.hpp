#include <iostream>
#include <string>

/*
 * COLORS.h VERSION 2 improvements:
 *
 * This library is in development, not recommended for developing purposes
 * This branch is made because of multiple issues, but mainly because there
 * are multiple functions for each color. This can be very hard to work with,
 * especially as the library grows This version, version 2, is going to be in
 * development as well as the previous branch.
 *
 * In this version, there is only one function to change a color instead of
 * multiple function like "setRed()" and "setBlue()". This will make the
 * library smaller.
 *
 * Project started on 2 oct 2020
 * GPL 3 License
 */

namespace colors {
enum class layer {
    FOREGROUND,
    BACKGROUND
};

enum class position {
    TOEND,
    TOBEGINNING,
    ALL,
    CLEAR
};

// Enum with basic colors
enum class color {
    black, red, green,
    yellow, blue, magenta, white, gray,
    brightRed, brightGreen, brightYellow,
    brightBlue, brightMagenta, brightCyan, brightWhite

};

void setColor(color color = color::red, layer layer = layer::FOREGROUND) {
    if (layer == layer::FOREGROUND) {
        switch(color) {
        case color::black:
            std::cout << "\033[30;40m";
            break;
        case color::red:
            std::cout << "\033[31;41m";
            break;
        case color::green:
            std::cout << "\033[32;42m";
            break;
    }
}

// RGB -> Change font color in RGB
void rgb(int r = 0, int g = 0, int b = 0, layer foreground = layer::FOREGROUND)
{
    std::string R = std::to_string(r);
    std::string G = std::to_string(g);
    std::string B = std::to_string(b);

    std::string result = R+G+B+"m";
    if (foreground==layer::FOREGROUND) {
        result = "\033[38;2"+result;
    }
    else {
        result = "\033[48;2"+result;
    }
    std::cout << result;
}

void resetAll()
{
    std::cout << "\033[0m";
}

// Font-related functions

void setBold()
{
    std::cout << "\033[1m";
}

void setThin()
{
    std::cout << "\033[2m";
}

void setItalic()
{
    std::cout << "\033[3m";
}

void setUnderline()
{
    std::cout << "\033[4m";
}

void setBlink()
{
    std::cout << "\033[5m";
}

// SetCursorTo -> Sets the cursor to a certain column and row

void setCursorTo(int row = 0, int col = 0)
{
    std::string str = "\033["+std::to_string(row)+";"+std::to_string(col)+"H";
    std::cout << str;
}

void moveCursorUp(int amount = 1)
{
    std::cout << "\033["+std::to_string(amount)+"A";
}

void moveCursorDown(int amount = 1)
{
    std::cout << "\033["+std::to_string(amount)+"B";
}

void moveCursorRight(int amount = 1)
{
    std::cout << "\033["+std::to_string(amount)+"C";
}

void moveCursorLeft(int amount = 1)
{
    std::cout << "\033["+std::to_string(amount)+"D";
}

// Clears screen

void clear()
{
    system("clear");
}

// Resetting properties

void resetColors(layer foreground = layer::FOREGROUND)
{
    if (foreground==layer::FOREGROUND) {
        std::cout << "\033[39m";
    }
    else {
        std::cout << "\033[49m";
    }
}

void resetBoldness()
{
    std::cout << "\033[22m";
}

void noUnderline()
{
    std::cout << "\033[24m";
}

void noBlink()
{
    std::cout << "\033[25m";
}

// Line deletion
void eraseLine(position pos = position::TOEND)
{
    if (pos==position::TOEND) {
        std::cout << "\033[0K";
    }
    else if (pos==position::TOBEGINNING) {
        std::cout << "\033[1K";
    }
    else {
        std::cout << "\033[2K";
    }
}

void eraseScreen(position pos = position::TOEND)
{
    if (pos==position::TOEND) {
        std::cout << "\033[J";
    }
    else if (pos==position::TOBEGINNING) {
        std::cout << "\033[1J";
    }
    else if (pos==position::ALL) {
        std::cout << "\033[2J";
    }
    else if (pos==position::CLEAR) {
        std::cout << "\033[3J";
    }
}
}; // namespace colors
