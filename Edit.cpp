#include "Edit.h"
#include <iomanip>

Edit::Edit()
{
	positionX = 0;
	positionY = 0;
	length = 10;
	textColor = White;
	backgroundColor = Black;
	text = "";

}

Edit::Edit(const Edit& other)
{
	positionX = other.positionX;
	positionY = other.positionY;
	length = other.length;
	textColor = other.textColor;
	backgroundColor = other.backgroundColor;
	text = other.text;
}

void Edit::setPosition(int x, int y)
{
	positionX = x;
	positionY = y;
}

void Edit::setLength(int len)
{
	length = len;
}

void Edit::setText(const std::string& txt)
{
	text = txt;
}

void Edit::setTextColor(Color color)
{
	textColor = color;
}

void Edit::setBackgroundColor(Color color)
{
	backgroundColor = color;
}

std::string Edit::getText() const
{
	return text;
}

void Edit::userText()
{
	char ch;
	ch = _getch();
	while (ch != '\r')
	{
		ch = _getch();
		if (ch == '\b')
		{
			if (!text.empty())
			{
				text.pop_back();
				drawText();
			}
		}
		else if (ch != '\r')
		{
			text.push_back(ch);
			drawText();
		}
	}
}

void Edit::drawText() const
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { (SHORT)positionX, (SHORT)positionY };
	SetConsoleCursorPosition(hConsole, pos);
	SetConsoleTextAttribute(hConsole, (WORD)((backgroundColor << 4) | textColor));
	std::cout << std::setw(length) << text;
}