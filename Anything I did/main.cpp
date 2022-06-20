#include <iostream>
#include <math.h>
#include "main.h"
#include "Classes.h"
using namespace std;
#define Pause console::wait();

int main()
{
    EnterName();

    system("chcp 65001 > nul");
    string Word = "\033[1m\033[37m" + Name + "\033[0m\033[2m" + " is so Wholesome\033[0m";

    console::log(Word);
    Pause;

    // cout << Q_rsqrt(500) << endl;
    // cout << 1 / sqrt(500) << endl;
}