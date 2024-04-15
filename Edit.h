//#pragma once
#ifndef EDIT_H
#define EDIT_H

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

class Edit
{
public:
	enum Color
	{
		Black = 0,
		Blue = 1,
		Green = 2,
		Cyan = 3,
		Red = 4,
		Magenta = 5,
		Yellow = 6,
		White = 7
	};
	Edit();
	Edit(const Edit& other);

	void setPosition(int x, int y);
	void setLength(int len);
	void setText(const std::string& txt);
	void setTextColor(Color color);
	void setBackgroundColor(Color color);
	std::string getText() const;
	void userText();

private:
	int positionX;
	int positionY;
	int length;
	Color textColor;
	Color backgroundColor;
	std::string text;
	
	void drawText() const;
};

#endif
