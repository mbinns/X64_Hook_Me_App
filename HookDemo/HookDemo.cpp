#include <iostream>
#include <windows.h>


//Prototype
int Subtract(int x);

int main()
{
    int number = 1000;

    while (TRUE)
    {
        if (GetAsyncKeyState(VK_END) & 1)
        {
            break;
        }
        if (GetAsyncKeyState(VK_SPACE) & 1)
        {
            number = Subtract(number);
        }
    }

    return 0;
}

__declspec(noinline) int Subtract(int x)
{
    int z = x - 2;
    std::cout << "Result: " << z << std::endl;
    return z;
}