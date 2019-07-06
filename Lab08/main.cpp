#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int *ptr = new int(5);

    cout << "Address: " << ptr << " Value: " << *ptr << endl;

    delete ptr;
    return 0;
}