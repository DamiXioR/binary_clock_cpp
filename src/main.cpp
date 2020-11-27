#include <BinaryClock.hpp>
#include <BinaryFromDecimalConverter.hpp>

#include <iostream>

int main()
{
    /*BinaryFromDecimalConverter converter{};

    std::vector<bool> bits{};
    bits = converter(27);
    
    for (const auto& el : bits) {
        std::cout << el << " ";
    }
    */

    BinaryClock bc;
    bc.createTime();

    return 0;
}
