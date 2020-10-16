# Colors

Colors is a library for color output with C++.

### Example

```cpp
#include <iostream>
#include "colors.hpp"

int main()
{
    colors::setColor(colors::red); // Sets the text color to be red
    colors::setBold();             // Sets the text to be bold

    std::cout << "Hello!";
    return 0;
}
```

## Documentation

Colors is a simple library. Here are a couple functions:

```cpp
setColor(black);
setBold();
```

These functions set your output text to be black and bold.

Here is a list of every function:

```cpp
using namespace colors;    // This library is in a namespace

setColor(red, BACKGROUND); // The BACKGROUND argument
setColor(red);
setColor(green);
setColor(yellow);
setColor(blue);
setColor(magenta);
setColor(cyan);
setColor(white);
setColor(gray);

// Bright colours
setColor(brightRed);
setColor(brightGreen);
setColor(brightYellow);
setColor(brightBlue);
setColor(brightMagenta);
setColor(brightCyan);
setColor(brightWhite);

// RGB
rgb(100, 12, 30, BACKGROUND);   // Sets the background to be dark-red

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
resetColors(BACKGROUND); // Resets background color
resetBoldness();         // Resets boldness
noBlink();               // No blinking text
noUnderline();           // No underline on text

// Deleting text
eraseLine();                        // Deletes text until end of line
eraseLine(TOEND);         // Deletes text until end of line (explicit)
eraseLine(TOBEGINNING);   // Deletes text until beginning of line
eraseLine(ALL);           // Deletes text on line

// Clearing terminal
eraseScreen();            // Clears from cursor to bottom of console/terminal
eraseScreen(TOEND);       // Clears from cursor to bottom of console/terminal (explicit)
eraseScreen(TOBEGINNING); // Clears from cursor to beginning of console/terminal
eraseScreen(ALL);         // Clears all
eraseScreen(CLEAR);       // Deletes lines in scrollback buffer of console/terminal

/*
Enumerations:
|-------------|----------------------------------------|---------------------------|
| Enumeration | Purpose                                | Function(s)               |
|-------------|----------------------------------------|---------------------------|
| BACKGROUND  | To apply a color to background of text | setRed(), setBlue(), etc. |
|-------------|----------------------------------------|---------------------------|
| FOREGROUND  | To apply a color to text               | setRed(), setBlue(), etc. |
|-------------|----------------------------------------|---------------------------|
| ALL         | To delete line                         | eraseLine()               |
|-------------|----------------------------------------|---------------------------|
| TOEND       | To delete until end of line            | eraseLine()               |
|-------------|----------------------------------------|---------------------------|
| TOBEGINNING | To delete until beginning of line      | eraseLine()               |
|-------------|----------------------------------------|---------------------------|
| CLEAR       | To delete terminal buffer              | eraseScreen()             |
|-------------|----------------------------------------|---------------------------|
 Other enumerations include colors,
 which are all used in the setColor() function:
 
 red
 green
 yellow
 blue
 magenta
 cyan
 white
 gray

 brightRed
 brightGreen
 brightYellow
 brightBlue
 brightMagenta
 brightCyan
 brightWhite
 brightGray
*/
```

That's it! Colors just makes it simpler to output text to the console, but with colors.

#### Note:

Not all functions are compatible with every terminal, so some are more compatible than others.
