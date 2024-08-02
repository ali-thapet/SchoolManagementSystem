#include "cmd_Handler.h"

void cmdSetConsoleColour(u8 au8Color)
{
	HANDLE  hConsoleHandler;
	hConsoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandler, au8Color);
}

void cmdResetConsoleColour(void)
{
	HANDLE  hConsoleHandler;
	hConsoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandler, TEXT_DWhite);
}

void cmdGoToXY(u8 au8Xposition, u8 au8Yposition)
{
	HANDLE hConsoleHandler;
	COORD cConsoleCoordinatorHandler;

	hConsoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	cConsoleCoordinatorHandler.X = au8Xposition;
	cConsoleCoordinatorHandler.Y = au8Yposition;

	SetConsoleCursorPosition(hConsoleHandler, cConsoleCoordinatorHandler);
}

void cmdClearScreen(void)
{
    //system("@cls||clear");
	system("cls"); //from windows APIs
}

void cmdShowConsoleCursor(u8 au8ShowFlag)
{
   HANDLE  hConsoleHandler;
   CONSOLE_CURSOR_INFO CS_info;

   hConsoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
   GetConsoleCursorInfo(hConsoleHandler, &CS_info);
   CS_info.bVisible = au8ShowFlag;
   SetConsoleCursorInfo(hConsoleHandler, &CS_info);
}
