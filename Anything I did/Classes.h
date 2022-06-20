#include <iostream>
class console
{
    public:
        static void log(std::string x)
        { std::cout << x << std::endl; }

        static void wait()
        { std::cout<<endl;system("pause"); }
};