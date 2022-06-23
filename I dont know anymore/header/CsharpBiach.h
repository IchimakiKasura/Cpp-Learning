#pragma once
#include <iostream>
#include "index.h"

bool g_isRunning = false;

// This will blow your mind
// it makes things that makes things.
void InitializeComponent()
{
    char* chr;

    if(!g_isRunning)
        g_isRunning = true;

    if(g_isRunning)
    {
        _PartialMain();
        chr = (char *) malloc(10);
    }

    free(chr);
}