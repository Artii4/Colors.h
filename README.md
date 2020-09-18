# Colors

Colors is a library for color output with C++.

### Example

```cpp
    #include <iostream>
    #include "colors.h"

    int main()
    {
        setRed();   // Colors function
        setBold();  // Colors function

        std::cout << "Hello!";
        return 0;
    }
```

### Documentation

Colors is a simple library. Here are a couple functions:

```cpp
setBlack();
setRed();
setBold();
```

These functions set your output text to be Black, red and then bold.

Here is a list of every function:

```cpp
setRed();           // To change the background color, add the BACKGROUND argument like seen below
setRed(BACKGROUND); // The BACKGROUND argument
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

// Reset all options
resetAll();

// Font-related
setBold();
setThin();
setItalic();
setUnderline();

// Not widely supported
setBlink();

```

That's it! Colors just makes it simpler to output text to the console, but with colors.
