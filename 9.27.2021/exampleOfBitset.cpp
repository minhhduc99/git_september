// Tinh 2^n

#include <iostream>
#include <bitset>

long long bitsetFunction(int n)
{
    std::bitset<20> foo;
    foo.set(n);
    return foo.to_ulong();
}

int main(void)
{
    std::cout << bitsetFunction(16) << std::endl;
    return 0;
}