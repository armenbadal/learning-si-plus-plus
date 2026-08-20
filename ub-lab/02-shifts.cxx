#include <iostream>

int main()
{
    {
    unsigned int x = 1;
    auto y = x << 32;
    }

    {
    int n = -1;
    auto y = 1u << n;
    }

    {
    unsigned int x = 1;
    auto y = x << 31;
    }

    return 0;
}