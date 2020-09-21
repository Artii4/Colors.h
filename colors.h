#include <iostream>
#include <string>

// This is a Color library for outputting text with colors
// The library consists of functions that set colors, without the user having to enter escape codes manually

// The layout is simple - To set a color, write "set", and then the color.
// For example, "setBlack()" sets the color to be black

// NOTE: Not all color or font changes are compatible with every single system. This works only on MAC/LINUX.

namespace colors
{
    enum layer
    {
        FOREGROUND,
        BACKGROUND
    };

    // RGB -> Change font color in RGB
    void rgb(int r = 0, int g = 0, int b = 0, layer foreground = FOREGROUND)
    {
        std::string R = std::to_string(r);
        std::string G = std::to_string(g);
        std::string B = std::to_string(b);

        std::string result = R + G + B + "m";
        if (foreground == FOREGROUND)
        {
            result = "\033[38;2" + result;
        }
        else
        {
            result = "\033[48;2" + result;
        }
        std::cout << result;
    }

    void setBlack(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[30m";
        }
        else
        {
            std::cout << "\033[40";
        }
    }

    void setRed(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[31m";
        }
        else
        {
            std::cout << "\033[41m";
        }
    }

    void setGreen(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[32m";
        }
        else
        {
            std::cout << "\033[42m";
        }
    }

    void setYellow(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[33m";
        }
        else
        {
            std::cout << "\033[43m";
        }
    }

    void setBlue(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[34m";
        }
        else
        {
            std::cout << "\033[44m";
        }
    }

    void setMagenta(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[35m";
        }
        else
        {
            std::cout << "\033[45m";
        }
    }

    void setCyan(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[36m";
        }
        else
        {
            std::cout << "\033[46m";
        }
    }

    void setWhite(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[37m";
        }
        else
        {
            std::cout << "\033[47m";
        }
    }

    // Brighter colors
    void setGray(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[90m";
        }
        else
        {
            std::cout << "\033[100m";
        }
    }

    void setBrightRed(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[91m";
        }
        else
        {
            std::cout << "\033[101m";
        }
    }

    void setBrightGreen(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[92m";
        }
        else
        {
            std::cout << "\033[102m";
        }
    }

    void setBrightYellow(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[93m";
        }
        else
        {
            std::cout << "\033[103m";
        }
    }

    void setBrightBlue(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[94m";
        }
        else
        {
            std::cout << "\033[104m";
        }
    }

    void setBrightMagenta(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[95m";
        }
        else
        {
            std::cout << "\033[105m";
        }
    }

    void setBrightCyan(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[96m";
        }
        else
        {
            std::cout << "\033[106m";
        }
    }

    void setBrightWhite(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[97m";
        }
        else
        {
            std::cout << "\033[107m";
        }
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
        std::string str = "\033[" + std::to_string(row) + ";" + std::to_string(col) + "H";
        std::cout << str;
    }

    void moveCursorUp(int amount = 1)
    {
        std::cout << "\033[" + std::to_string(amount) + "A";
    }

    void moveCursorDown(int amount = 1)
    {
        std::cout << "\033[" + std::to_string(amount) + "B";
    }

    void moveCursorRight(int amount = 1)
    {
        std::cout << "\033[" + std::to_string(amount) + "C";
    }

    void moveCursorLeft(int amount = 1)
    {
        std::cout << "\033[" + std::to_string(amount) + "D";
    }

    // Clears screen

    void clear()
    {
        system("clear");
    }

    // Resetting properties

    void resetColors(layer foreground = FOREGROUND)
    {
        if (foreground == FOREGROUND)
        {
            std::cout << "\033[39m";
        }
        else
        {
            std::cout << "\033[49m";
        }
    }

    void resetBoldness()
    {
        std::cout << "\033[22m";
    }
}; // namespace colors