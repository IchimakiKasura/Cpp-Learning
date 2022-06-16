#include <iostream>
std::string _waitString = "\npress any key to continue...";

class console
{
    public:
        static void log(std::string x)
        { std::cout << x << std::endl; }

        static void wait()
        {
            std::cout << _waitString;

            // yes, i hate it
            // system("pause") can be used but
            // its for "windows" only.
            getchar();
        }
};