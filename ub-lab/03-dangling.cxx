#include <iostream>

const int& get()
{
    int x = 42;
    return x;
}

int main()
{
    const int& r = get();

    std::cout << r << '\n';
}
