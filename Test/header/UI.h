#pragma once
#include <iostream>
using namespace std;

void PaintUI(HWND hWnd)
{
    //cout << "Displaying text..\n";

    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hWnd, &ps);

    // LMAO IT WONT SHOW WTF?
    //TextOut(hdc,10,10, "Ass",strlen("Ass"));

    // All painting occurs here, between BeginPaint and EndPaint.
    FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
    EndPaint(hWnd, &ps);
}

void ButtonUI(HWND hWnd)
{
    CreateWindow("BUTTON","wOW kINDa inTeresting", WS_CHILD | WS_VISIBLE, 100, 100, 200, 50, hWnd, (HMENU) 1, NULL, NULL);
}