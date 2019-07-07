#include <iostream>
#include <memory>
using namespace std;

class A
{
    public:
        void classMethod()
        {
            cout << "A::classMethod()" << endl;
        }
};

int main()
{
    shared_ptr<A> ptr1 (new A);
    ptr1->classMethod();

    cout << "ptr1 address  : " << ptr1.get() << endl;
    cout << "ptr1 use count: " << ptr1.use_count() << endl << endl;

    shared_ptr<A> ptr2 = ptr1;

    cout << "ptr1 address  : " << ptr1.get() << endl;
    cout << "ptr1 use count: " << ptr1.use_count() << endl;
    cout << "ptr2 address  : " << ptr2.get() << endl;
    cout << "ptr2 use count: " << ptr2.use_count() << endl << endl;

    ptr1.reset();

    cout << "ptr1 address  : " << ptr1.get() << endl;
    cout << "ptr1 use count: " << ptr1.use_count() << endl;
    cout << "ptr2 address  : " << ptr2.get() << endl;
    cout << "ptr2 use count: " << ptr2.use_count() << endl << endl;

    return 0;
}