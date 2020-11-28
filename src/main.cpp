#include <BinaryClock.hpp>
#include <BinaryFromDecimalConverter.hpp>

#include <iostream>

int main()
{
    BinaryClock bc;
    while (true) {
        bc.createTime();
        system("clear");
    }
    return 0;
}
