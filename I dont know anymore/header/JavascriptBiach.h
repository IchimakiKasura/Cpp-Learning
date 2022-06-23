#pragma once
#include <iostream>
#include <sstream>
// using namepsace stdstsdtsdtsdtsdtsdtsdt

#define LmaoTrue true
#define LmaoTruent false
#define PRINTMOFO std::cout

class _Console
{
    int integer = 0;
    bool Boolean = LmaoTrue;

    bool CheckIfBooleanTrue()
    {
        return Boolean != LmaoTrue;
    }

    void PrintTheText(const char* str)
    {
        PRINTMOFO << str << std::endl;
    }


    public:
        // Very Hard to code.
        void log(const char* str)
        {
            if(integer != 1)
            {
                while(Boolean)
                {
                    if(Boolean != LmaoTruent)
                        Boolean = LmaoTruent;
                }

                bool IsItReallyFalse = CheckIfBooleanTrue();

                if(IsItReallyFalse == LmaoTrue)
                    PrintTheText(str);
            }
        }

        // lmao won't do that useless extra shit :D
        void log(std::string str)
        {
            PRINTMOFO << str << std::endl;
        }

        int log(int str)
        {
            PRINTMOFO << str << std::endl;
            return 0;
        }

        bool log(bool str)
        {
            PRINTMOFO << str << std::endl;
            return 0;
        }
};