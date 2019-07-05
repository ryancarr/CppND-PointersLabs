#include <iostream>
#include <cassert>
#include "PtrDetails.hpp"

using std::cout;
using std::endl;

int main()
{
    int *ptr1 = new int(5);
    int *ptr2 = new int(10);

    PtrDetails<int> *pointer1 = new PtrDetails<int>(ptr1);
    PtrDetails<int> *pointer2 = pointer1;

    if(pointer1 == pointer2)
    {
        cout << "Pointers are the same" << endl;
    }
    return 0;
}