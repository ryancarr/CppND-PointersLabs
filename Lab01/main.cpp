#include <iostream>

int main()
{
    int *ptr;
    ptr = new int;

    *ptr = 35;

    std::cout << "Memory address: " << ptr << std::endl;
    std::cout << "Memory value  : " << *ptr << std::endl;

    delete ptr;

    return 0;
}