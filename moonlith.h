#ifndef MOONLITH
#define MOONLITH

#include <windows.h>
#include <winbgim.h>
#include <stdio.h>
#include <math.h>

#define KEY_W 87
#define KEY_S 83
#define KEY_A 65
#define KEY_D 68
#define KEY_SPACE 32
#define KEY_E 69

int page=0;

int MoonInitWin(char const* title, int w, int h, int x, int y)
{
	initwindow(w,h,title,x,y);
	return 0;
}

int MoonCloseWin()
{
	getch();
	closegraph();
	return 0;
}

int MoonInitBuffer()
{
	setactivepage(page);
	setvisualpage(1 - page);	
	cleardevice();
	return 0;
}

int MoonFinishBuffer()
{
	page = 1 - page;
	delay(5);
	return 0;
}

int MoonLoadSPR(char const* imgfile, int left, int right, int top, int bottom)
{
	readimagefile(imgfile,left,right,top,bottom);
	return 0;
}
#endif