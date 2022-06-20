#include <iostream>
#include "header/Window.h"
using namespace std;

int main()
{
    cout << "Opening\n";
    Window* pWindow = new Window();

    bool running = true;

    while (running)
    {
        if(!pWindow->ProcessMessages())
        {
            cout << "Closing\n";
            running = false;
        }

        Sleep(100);
    }   

    delete pWindow; 
    return 0;
}