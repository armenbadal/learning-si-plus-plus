#include <cstddef>
#include <cstdint>

int main()
{
    alignas(1) std::byte buffer[sizeof(std::uint64_t) + 1];

    auto* p = reinterpret_cast<std::uint64_t*>(buffer + 1);

    *p = 42;
}

