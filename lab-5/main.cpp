#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
	COORD c = {x, y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void erase_ship(int x, int y)
{
	gotoxy(x, y);
	printf(" ");
}
void draw_ship(int x, int y)
{
	gotoxy(x, y);
	printf(" <-0-> ");
}
int main()
{
	char ch = ' ';
	int x = 38, y = 20;
	draw_ship(x, y);
	do
	{
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a' && x > 0)
			{
				erase_ship(x, y);
				draw_ship(--x, y);
			}
			if (ch == 'd' && x < 73)
			{
				erase_ship(x, y);
				draw_ship(++x, y);
			}
			if (ch == 's' && y < 30)
			{
				erase_ship(x, y);
				draw_ship(x, ++y);
			}
			if (ch == 'w' && y > 0)
			{
				erase_ship(x, y);
				draw_ship(x, --y);
			}
			fflush(stdin);
		}
		Sleep(1);
	} while (ch != 'x');
	return 0;
}