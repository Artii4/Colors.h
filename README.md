# Colors

Colors is a library for color output with C++.

### Example

```cpp
#include <iostream>
#include "colors.hpp"

int main()
{
    colors::setColor(color::red);   // Sets the text color to be red
    colors::setBold();              // Sets the text to be bold

    std::cout << "Hello!";
    return 0;
}
```

## Documentation

Colors is a simple library. Here are a couple functions:

```cpp
setColor(color::black);
setBold();
```

These functions set your output text to be black and bold.

Here is a list of every function:

```cpp
using namespace colors;    // This library is in a namespace

setColor(color::red, layer::BACKGROUND); // The layer::BACKGROUND argument
setColor(color::red);
setColor(color::green);
setColor(color::yellow);
setColor(color::blue);
setColor(color::magenta);
setColor(color::cyan);
setColor(color::white);
setColor(color::gray);

// Bright colours
setColor(color::brightRed);
setColor(color::brightGreen);
setColor(color::brightYellow);
setColor(color::brightBlue);
setColor(color::brightMagenta);
setColor(color::brightCyan);
setColor(color::brightWhite);

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
eraseLine(position::TOEND);         // Deletes text until end of line (explicit)
eraseLine(position::TOBEGINNING);   // Deletes text until beginning of line
eraseLine(position::ALL);           // Deletes text on line

// Clearing terminal
eraseScreen();                      // Clears from cursor to bottom of console/terminal
eraseScreen(position::TOEND);       // Clears from cursor to bottom of console/terminal (explicit)
eraseScreen(position::TOBEGINNING); // Clears from cursor to beginning of console/terminal
eraseScreen(position::ALL);         // Clears all
eraseScreen(position::CLEAR);       // Deletes lines in scrollback buffer of console/terminal

/*
Enumerations:
|-----------------------|----------------------------------------|---------------------------|
| Enumeration           | Purpose                                | Function(s)               |
|-----------------------|----------------------------------------|---------------------------|
| layer::BACKGROUND     | To apply a color to background of text | setRed(), setBlue(), etc. |
|-----------------------|----------------------------------------|---------------------------|
| layer::FOREGROUND     | To apply a color to text               | setRed(), setBlue(), etc. |
|-----------------------|----------------------------------------|---------------------------|
| position::ALL         | To delete line                         | eraseLine()               |
|-----------------------|----------------------------------------|---------------------------|
| position::TOEND       | To delete until end of line            | eraseLine()               |
|-----------------------|----------------------------------------|---------------------------|
| position::TOBEGINNING | To delete until beginning of line      | eraseLine()               |
|-----------------------|----------------------------------------|---------------------------|
| position::CLEAR       | To delete terminal buffer              | eraseScreen()             |
|-----------------------|----------------------------------------|---------------------------|
 Other enumerations include colors,
 which are all used in the setColor() function:
 
 color::red
 color::green
 color::yellow
 color::blue
 color::magenta
 color::cyan
 color::white
 color::gray

 color::brightRed
 color::brightGreen
 color::brightYellow
 color::brightBlue
 color::brightMagenta
 color::brightCyan
 color::brightWhite
 color::brightGray
*/
```

That's it! Colors just makes it simpler to output text to the console, but with colors.

#### Note:

Not all functions are compatible with every terminal, so some are more compatible than others.
