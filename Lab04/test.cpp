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

    cout << "----------------------------" << endl;

    if(lst.isEmpty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;
    
    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;

    lst.PushFront(5);
    cout << "Pushed 5 to front of list" << endl;

    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;

    lst.PushBack(6);
    cout << "Pushed 6 to back of list" << endl;

    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;

    lst.PushBack(4);
    cout << "Pushed 4 to back of list" << endl;

    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;

    cout << "Popped " << lst.PopFront() << " off the front" << endl;

    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;

    cout << "Popped " << lst.PopBack() << " off the back" << endl;

    cout << "List size: " << lst.Size() << endl;

    lst.Print();

    cout << "----------------------------" << endl;


    return 0;
}