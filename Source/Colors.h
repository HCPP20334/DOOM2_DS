//Colors C++ for console by Hackerman20334
#pragma comment(lib , winmm.lib)
#include<iostream>
#include <windows.h>
#include "../C++/PROG/VF.h"
//#include "Mouse.h"
enum ConsoleColor
{
	Black       =0,
	Blue        =1,
	Green       =2,
	Cyan        =3,
	Red         =4,
	Magenta     =5,
	Brown       =6,
	White       =15,
	Lightblue   =9,
	Yellow      =14,
	Lightgreen  =10
};
void SetColor(int text)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD) text);
}
bool ColorText(bool ShowText , string text)
{
SetColor(47);
cout<<"\t\t\t          \t\t\t    "<<endl;
cout<<"\t\t\t          \t\t\t    "<<endl;
cout<<"\t\t\t"<<text<<"\t\t\t    "<<endl;
cout<<"\t\t\t          \t\t\t    "<<endl;
cout<<"\t\t\t          \t\t\t    "<<endl;
SetColor(15);
}
bool ConsoleFullScreen(HWND bConsoleD , int sizeWindow)
{
	//HWND "Handle Console window" = GetConsoleWindows(); 
	bConsoleD = GetConsoleWindow();//Handle Window
  SetWindowLong(bConsoleD, GWL_STYLE, GetWindowLong(bConsoleD, GWL_STYLE) & ~WS_CAPTION); 
  ShowWindow(bConsoleD, sizeWindow);
}

