# Colors

Colors is a library for color output with C++.

### Example

```cpp
#include <iostream>
#include "colors.hpp"

int main()
{
    colors::setRed();   // Sets the text color to be red
    colors::setBold();  // Sets the text to be bold

    std::cout << "Hello!";
    return 0;
}
```

### Documentation

Colors is a simple library. Here are a couple functions:

```cpp
setBlack();
setBold();
```

These functions set your output text to be black and bold.

Here is a list of every function:

```cpp
using namespace colors;    // This library is in a namespace

setRed();                  // To change background color, add layer::BACKGROUND
setRed(layer::BACKGROUND); // The layer::BACKGROUND argument
setBlack();
setGreen();
setYellow();
setBlue();
setMagenta();
setCyan();
setWhite();
setGray();

// Bright colours
setBrightRed();
setBrightGreen();
setBrightYellow();
setBrightBlue();
setBrightMagenta();
setBrightCyan();
setBrightWhite();

// RGB
rgb(100, 12, 30, layer::BACKGROUND);   // Sets the background to be dark-red

// Reset all options
resetAll();

// Font-related
setBold();
setThin();
setItalic();
setUnderline();
setBlink();

// Cursor-related functions
setCursorTo(/*Row, Column*/);   // "Amount" in these functions is 1 by default
moveCursorUp(/*Amount*/);
moveCursorDown(/*Amount*/);
moveCursorLeft(/*Amount*/);
moveCursorRight(/*Amount*/);

// Reset properties
resetColors(layer::BACKGROUND); // Resets background color
resetBoldness();                // Resets boldness
noBlink();                      // No blinking text
noUnderline();                  // No underline on text

// Deleting text
eraseLine();                        // Deletes text until end of line
eraseLine(position::TOBEGINNING);   // Deletes text until beginning of line
eraseLine(position::ALL);           // Deletes text on line
eraseLine(position::TOEND);         // Deletes text until end of line (explicit)

// Enumerations:
//
// layer::FOREGROUND        -> To apply a color to text (setRed(), setBlue(), etc.)
// layer::BACKGROUND        -> To apply a color to background of text (setRed, setBlue, etc.)
//
// position::ALL            -> To delete line                     (eraseLine())
// position::TOEND          -> To delete until end of line        (eraseLine())
// position::TOBEGINNING    -> To delete until beginning of line  (eraseLine())
```

That's it! Colors just makes it simpler to output text to the console, but with colors.

#### Note:

Not all functions are compatible with every terminal, so some are more compatible than others.
