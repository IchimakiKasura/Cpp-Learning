/*
 *   uhh idk i tried though so
 *   yeah feel free i think?
 *   to use this
 *
 *                   uh coded by ichimaki kasura
 *                      std: c++20
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
    /*
    outputs text on console

    @param x text to output
    @param endLine add new line after?
    */
    void log(auto x, bool endLine = false)
    {
        if (endLine)
            KASU_OUT << x << std::endl;
        else
            KASU_OUT << x;
    }

    /*clears the console*/
    void clear()
    {
        KASU_IN.clear();
    };

    /*
    * Get input from console.
    *
    * @param x type variable
    * @param comment text to printout [default = null]
    * @param typeDependent automatically check the variable type [default = null]
    * @param repeat repeats if input is not the same as the type [default = null]
    * 
    * @returns returns input from console to the X parameter
    */
    void getKey(auto x, std::string comment = NULL, bool typeDependent = false, bool repeat = false)
    {
        std::string getType = "";

        if (!typeDependent)
        {
            printf(comment.c_str());
            KASU_IN >> x;
        }
        else
        {
            bool typeID = typeid(x) == typeid(int);
            while (1)
            {
                switch (typeID)
                {
                    case true:
                        printf(comment.c_str());
                        KASU_IN >> getType;
                        if (!std::regex_match(getType, KASU_REGEX_NUMBER))
                        {
                            printf("Invalid number!\n");
                            if (!repeat) break;
                        }
                        else return;
                    break;

                    case false:
                        printf(comment.c_str());
                        KASU_IN >> getType;
                        if (!std::regex_match(getType, KASU_REGEX_STRING))
                        {
                            printf("Invalid!\n");
                            if (!repeat) break;
                        }
                        else return;
                    break;
                }
            }
        }
    }


};
/*
feel free to change the name if its interferring with your code.

- created by ichimaki kasura :>
*/
_console console;