#include <iostream>
#include <vector>

int main()
{
    // {
    //     int a[3] = {10, 20, 30};
    //     std::cout << a[3];
    // }

    // {
    //     std::vector<int> v{10, 20, 30};
    //     std::cout << v[3];
    // }

    // {
    //     std::vector<int> v{10, 20, 30};
    //     std::cout << v.at(3);
    // }

    {
        std::vector<int> vc;
        vc.reserve(10);
        vc[0] = 37;
        for(auto&& e : vc) std::cout << e << ' ';
    }
}
