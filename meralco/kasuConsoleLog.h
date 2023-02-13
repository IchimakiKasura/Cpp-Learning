/*
*   uhh idk i tried though so 
*   yeah feel free i think?
*   to use this
* 
*                   uh coded by ichimaki kasura
*/

#pragma once
#include <iostream>
#include <regex>

#define KASU_REGEX_STRING std::regex("^[A-Za-z]+$")
#define KASU_REGEX_NUMBER std::regex("^[0-9]+$")
#define KASU_OUT std::cout
#define KASU_IN std::cin

class _console
{
public:
    void log(auto x, bool endLine = false)
    {
        if (endLine)
            KASU_OUT << x << std::endl;
        else
            KASU_OUT << x;
    }

    void clear()
    {
        KASU_IN.clear();
    };

    void getKey(std::string comment, auto x, bool typeDependent = false, bool repeat = false)
    {
        std::string getType = "";

        if (!typeDependent)
        {
            KASU_OUT << comment;
            KASU_IN >> x;
        }
        else
        {
            if (typeid(x) == typeid(int))
            {
                if (!typeDependent)
                    return;

                while(1)
                {
                    KASU_OUT << comment;
                    KASU_IN >> getType;
                    if (!std::regex_match(getType, KASU_REGEX_NUMBER))
                    {
                        KASU_OUT << "Invalid number!\n";
                        if (!repeat) break;
                    } else break;
                }
            }
            else
            {
                if (!typeDependent)
                    return;

                while(1)
                {
                    KASU_OUT << comment;
                    KASU_IN >> getType;
                    if (!std::regex_match(getType, KASU_REGEX_STRING))
                    {
                        KASU_OUT << "Invalid!\n";
                        if (!repeat) break;
                    } else break;
                }
            }
        }
    }
};
_console console;