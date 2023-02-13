#include <iostream>
#include <vector>
#include "str.h"

using std::vector;
using std::size;

// adds new method cuz i can
template<class T>
class readings : public vector<T>
{
    public:
        void add(int number)
        {
            this->push_back(number);
        }
};

class Meralco
{
public:
    int Money = 0;
    int kWh = 0;
    readings<int> oldReadings;
    readings<int> newReadings;

    void subtractReadings(readings<int> oldReading, readings<int> newReading)
    {
        for(int i = 0; i < oldReading.size(); i++)
        {
            printf("%d test =", i);
            printf("%d\n", oldReading[i]);
        }
    }
};