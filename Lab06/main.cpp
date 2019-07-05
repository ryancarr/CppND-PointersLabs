#include <iostream>

template <typename Type>
void swap(Type &var1, Type &var2)
{
    // Swaps two variables by using pointer arithmetic
    var1 += var2;
    var2 = var1 - var2;
    var1 -= var2;
}

int main()
{
    float var1 = 23.2;
    float var2 = 14.83;

    std::cout << "Values before swap: " << var1 << " " << var2 << std::endl;
    swap(var1, var2);
    std::cout << "Values after swap: " << var1 <<  " " << var2 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Values before swap: " << var1 << " " << var2 << std::endl;
    swap(var1, var2);
    std::cout << "Values after swap: " << var1 <<  " " << var2 << std::endl;

    return 0;
}