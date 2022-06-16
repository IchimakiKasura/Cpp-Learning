#include <iostream>

using namespace std;

class Console
{
    public:
        static log(const string& x)
        {
            cout << x << endl;
            return 0;
        }
};

int main()
{
    const string Word = "This is very Epic";

    Console::log(Word);

    getchar();
}