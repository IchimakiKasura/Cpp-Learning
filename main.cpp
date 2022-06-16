#include <iostream>
#include "Classes.h"

using namespace std;

#define Pause console::wait();

string Name;

void EnterName()
{
    cout << "Your Name: ";
    getline(cin, Name);
}

int main()
{
    EnterName();

    string Word = Name + " is so Wholesome";

    console::log(Word);
    Pause;
}