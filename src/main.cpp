#include <BinaryClock.hpp>
#include <BinaryFromDecimalConverter.hpp>

#include <iostream>

int main()
{
    BinaryFromDecimalConverter converter{};

    std::vector<bool> bits{};
    bits = converter(8);
    
    for (const auto& el : bits) {
        std::cout << el << "\n";
    }
    std::cout << "\n";

    BinaryClock bc;
    bc.createTime();

    return 0;
}
