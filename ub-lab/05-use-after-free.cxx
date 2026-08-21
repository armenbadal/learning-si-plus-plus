#include <iostream>
#include <memory>

int main()
{
    {
        int* p = new int(42);
        delete p;
        std::cout << *p << std::endl;
    }

    {
        auto p = std::make_unique<int>(43);
        int* observer = p.get();
        p.reset();
        std::cout << *observer << std::endl;
    }

    return 0;
}
