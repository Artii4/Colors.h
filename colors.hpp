#include <iostream>
#include <string>

/*
 * COLORS.h VERSION 2 improvements:
 *
 * NOTE: This branch is in development and experimental
 *
 * This branch is made because of multiple issues, but mainly because there
 * are multiple functions to change the color of text. This can be very hard to
 * work with, especially as the library grows.
 *
 * In this version, there is only one function to change a color instead of
 * multiple function like "setRed()" and "setBlue()". This will make the
 * library smaller.
 *
 * Other features are going to be added as well!
 * Feel free to contribute
 *
 * Project started on 2 oct 2020
 * GPL 3 License
 */

// Enums are of type char to save memory

namespace colors {
enum class layer : char {
	FOREGROUND,
	BACKGROUND
};

enum class position : char {
	TOEND,
	TOBEGINNING,
	ALL,
	CLEAR
};

// Enum with basic colors
enum class color : char {
	black,
	red,
	green,
	yellow,
	blue,
	magenta,
	cyan,
	white,
	gray,
	brightRed,
	brightGreen,
	brightYellow,
	brightBlue,
	brightMagenta,
	brightCyan,
	brightWhite

};

void setColor(color color = color::red, layer layer = layer::FOREGROUND)
{
	if (layer==layer::FOREGROUND) {
		// Checking for each possible foreground color
		if (color==color::black)
			std::cout << "\033[30m";
		else if (color==color::red)
			std::cout << "\033[31m";
		else if (color==color::green)
			std::cout << "\033[32m";
		else if (color==color::yellow)
			std::cout << "\033[33m";
		else if (color==color::blue)
			std::cout << "\033[34m";
		else if (color==color::magenta)
			std::cout << "\033[35m";
		else if (color==color::cyan)
			std::cout << "\033[36m";
		else if (color==color::white)
			std::cout << "\033[37m";
		else if (color==color::gray)
			std::cout << "\033[90m";
		else if (color==color::brightRed)
			std::cout << "\033[91m";
		else if (color==color::brightGreen)
			std::cout << "\033[92m";
		else if (color==color::brightYellow)
			std::cout << "\033[93m";
		else if (color==color::brightBlue)
			std::cout << "\033[94m";
		else if (color==color::brightMagenta)
			std::cout << "\033[95m";
		else if (color==color::brightCyan)
			std::cout << "\033[96m";
		else if (color==color::brightWhite)
			std::cout << "\033[97m";
	}
	else if (layer==layer::BACKGROUND) {
		// Checking for each possible background color
		if (color==color::black)
			std::cout << "\033[40m";
		else if (color==color::red)
			std::cout << "\033[41m";
		else if (color==color::green)
			std::cout << "\033[42m";
		else if (color==color::yellow)
			std::cout << "\033[43m";
		else if (color==color::blue)
			std::cout << "\033[44m";
		else if (color==color::magenta)
			std::cout << "\033[45m";
		else if (color==color::cyan)
			std::cout << "\033[46m";
		else if (color==color::white)
			std::cout << "\033[47m";
		else if (color==color::gray)
			std::cout << "\033[100m";
		else if (color==color::brightRed)
			std::cout << "\033[101m";
		else if (color==color::brightGreen)
			std::cout << "\033[102m";
		else if (color==color::brightYellow)
			std::cout << "\033[103m";
		else if (color==color::brightBlue)
			std::cout << "\033[104m";
		else if (color==color::brightMagenta)
			std::cout << "\033[105m";
		else if (color==color::brightCyan)
			std::cout << "\033[106m";
		else if (color==color::brightWhite)
			std::cout << "\033[107m";
	}
}
// RGB -> Change font color in RGB
void rgb(int r = 0, int g = 0, int b = 0, layer foreground = layer::FOREGROUND)
{
	std::string R = std::to_string(r);
	std::string G = std::to_string(g);
	std::string B = std::to_string(b);

	std::string result;
	result = R+';'+G+';'+B+"m";
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
	std::string str =
			"\033["+std::to_string(row)+";"+std::to_string(col)+"H";
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

void resetColors(layer
foreground = layer::FOREGROUND)
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

// A class to draw rectangles.
// Takes 4 parameters: Width, Height, X-Offset and Y-Offset.
// All should be of integer type
class Rect {
public:
	Rect(int sizeX, int sizeY, int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
		this->sizeX = sizeX;
		this->sizeY = sizeY;
	}
	// Main draw function
	void draw()
	{
		// Each row
		for (int yPosition = 0; yPosition<sizeY; yPosition++) {
			moveCursorRight(x);
			moveCursorDown(y);
			// Each column/cell
			for (int xPosition = 0; xPosition<sizeX; xPosition++) {
				// If in corner
				if (xPosition==0 && yPosition==0
						|| xPosition==0 && yPosition==sizeY-1
						|| xPosition==sizeX-1 && yPosition==0
						|| xPosition==sizeX-1 && yPosition==sizeY-1) {
					std::cout << '+';
				}
					// If on side
				else if (yPosition==0 || yPosition==sizeY-1) {
					std::cout << "-";
				}
					// If on top/bottom
				else if (xPosition==0 || xPosition==sizeX-1) {
					std::cout << '|';
				}
					// If inside the rectangle
				else
					std::cout << charInside;
			}
			std::cout << '\n';
		}
	}

	// Properties
	int x;
	int y;
	int sizeX;
	int sizeY;
	char charInside = ' ';
};
} // namespace colors