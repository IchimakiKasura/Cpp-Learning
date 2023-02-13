#include <iostream>
#include "kasuConsoleLog.h"
#include "func.h"

using namespace std;

int main()
{
    Meralco meralco;

    // get the basics
    // console.log("Please enter the kWh: ");
    // console.getKey(meralco.kWh, true, number);

    int numberOnly = 0;
    string stringOnly = "";

    console.getKey("numbers Only: ", numberOnly, true, true);
    console.getKey("strings Only: ", stringOnly, true, true);

    return 0;
}