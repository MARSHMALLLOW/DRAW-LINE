#include <windows.h>

int main() {
	FreeConsole(); //Hide the console.
	HDC hdc = GetDC(HWND_DESKTOP);
	int ScreenWidth, ScreenHeight;
	ScreenWidth = GetSystemMetrics(SM_CXSCREEN); //Get the max X. (the width of the screen).
	ScreenHeight = GetSystemMetrics(SM_CYSCREEN); //And the max Y. (the height of the screen).
	while(1)
	{
		LineTo(hdc, rand() % (0 - ScreenWidth), 0);
		LineTo(hdc, rand() % (0 - ScreenWidth), ScreenHeight);
	}
}
