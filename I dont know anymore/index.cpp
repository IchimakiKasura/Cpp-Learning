#include <iostream>
#include "header/CsharpBiach.h"
#include "header/index.h"

#define IsItReally true

int main()
{
    InitializeComponent();

    std::string FirstWord = message._g_First;
    std::string SecondWord = message._g_2;
    std::string Complete = (FirstWord + " " + SecondWord);

    Console.log(Complete); // Output
    
    return 0; // nani
}