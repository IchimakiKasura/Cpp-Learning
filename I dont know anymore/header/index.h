#pragma once
#include <iostream>
#include "CsharpBiach.h"
#include "JavascriptBiach.h"

#define ThisIsTheFirstWordForTheApplicationOrProgramWhateverThisIs "48656C6C6F"
#define ThisIsTheOtherOneIDontKnow "776F726C64"


_Console Console;

class _TheWords
{
    public:
        std::string _g_First = ThisIsTheFirstWordForTheApplicationOrProgramWhateverThisIs;
        std::string _g_2 = ThisIsTheOtherOneIDontKnow;
};

// Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste Copy Paste 
std::string TranslateJapaneseToEnglish(std::string Trap)
{
    std::string ascii = "";
    for (size_t i = 0; i < Trap.length(); i += 2)
    {
        std::string part = Trap.substr(i, 2);
        char ch = std::stoul(part, nullptr, 16);
        ascii += ch;
    }
    return ascii;
}

// This is the most important code of all of the multiverse
// it is the heart of the code.
int _isnt()
{
    if(true)
    {
        return 1;
    }
}

// Some intense bullshit.
int _PartialMain()
{
    bool isTrue = true;

    if(true)
    {
        while(isTrue)
        {
            isTrue = false;
        }

        int isnt = _isnt();

        if(isnt == 0)
        {
            exit(1);
        }
        else
        {
            int i = 0;
            int *pp = &i; 
        }
    }

    return 1;
}
_TheWords message;