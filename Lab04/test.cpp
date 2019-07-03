#include <cassert>
#include <iostream>
#include "list.hpp"

using custom::List;
using std::cout;
using std::endl;

int main()
{
    List<int> lst;
    cout << "List created" << endl;

    if(lst.isEmpty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;
    
    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    lst.PushFront(5);
    cout << "Pushed 5 to front of list" << endl;

    cout << "List size: " << lst.Size() << endl;

    return 0;
}