#include <iostream>
#include <limits>
using namespace std;
#define STRING_NUM "Enter a number 1-12: "

int GetMonth()
{
    int x;
    cout << STRING_NUM;
    while(!(cin >> x))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << STRING_NUM;
    }
    return x;
}

string GiveMonth(int x)
{
    string Month;
    switch(x)
    {
        case 1: Month = "January"; break;
        case 2: Month = "February"; break;
        case 3: Month = "March"; break;
        case 4: Month = "April"; break;
        case 5: Month = "May"; break;
        case 6: Month = "June"; break;
        case 7: Month = "July"; break;
        case 8: Month = "August"; break;
        case 9: Month = "September"; break;
        case 10: Month = "October"; break;
        case 11: Month = "November"; break;
        case 12: Month = "December"; break;
    }
    return Month;
}

int main()
{
    int _input;
    while(true)
    {
        _input = GetMonth();
        cout << GiveMonth(_input) << endl;
    }
}