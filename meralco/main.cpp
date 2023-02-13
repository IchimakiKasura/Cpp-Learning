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

    // int numberOnly = 0;
    // string stringOnly = "";

    // console.getKey(numberOnly, "numbers Only: ", true, true);
    // console.getKey(stringOnly, "strings Only: ", true, true);

    
    // string sample = "";
    // // std::cout << "sample: "
    // // std::cin >> sample
    // console.getKey(sample, "sample: ");
    // // std::cout << "lamaw" | printf("lamaw")
    // console.log("lamaw");

    meralco.newReadings.add(22);
    meralco.newReadings.add(22);
    meralco.newReadings.add(23);
    meralco.newReadings.add(24);
    meralco.newReadings.add(242);
    meralco.newReadings.add(2431);
    meralco.newReadings.add(2423);
    meralco.newReadings.add(24123);
    meralco.newReadings.add(21234);
    meralco.newReadings.add(221234);
    meralco.newReadings.add(21221234);
    meralco.subtractReadings(meralco.newReadings, meralco.oldReadings);

    return 0;
}