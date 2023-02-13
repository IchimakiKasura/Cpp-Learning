#include <iostream>
#include <vector>
#include "str.h"

using std::vector;

class Meralco
{
public:
    int Money = 0;
    int kWh = 0;
    int oldReadings[32767];
    int newReadings[32767];
};