#include <iostream>
#include <sstream>
// using namepsace stdstsdtsdtsdtsdtsdtsdt

#define LmaoTrue true
#define LmaoTruent false
#define IsItReally LmaoTrue
#define PRINTMOFO std::cout
#define ThisIsTheFirstWordForTheApplicationOrProgramWhateverThisIs "48656C6C6F"
#define ThisIsTheOtherOneIDontKnow "776F726C64"

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
class _TheWords
{
    public:
        std::string _g_First = ThisIsTheFirstWordForTheApplicationOrProgramWhateverThisIs;
        std::string _g_2 = ThisIsTheOtherOneIDontKnow;
};

_Console Console;
_TheWords message;
bool g_isRunning = false;

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

int main()
{
    InitializeComponent();

    std::string FirstWord = TranslateJapaneseToEnglish(message._g_First);
    std::string SecondWord = TranslateJapaneseToEnglish(message._g_2);
    std::string Complete = (FirstWord + " " + SecondWord);

    Console.log(Complete); // Output
    
    return 0; // nani
}