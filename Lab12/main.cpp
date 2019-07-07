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
    unique_ptr<A> ptr (new A);
    
    ptr->classMethod();

    cout << "ptr memory address: " << ptr.get() << endl;

    unique_ptr<A> ptr2 = move(ptr);
    
    cout << "ptr memory address: " << ptr.get() << endl;
    cout << "ptr2 memory address: " << ptr2.get() << endl;

    unique_ptr<A> ptr3 = move(ptr2);

    cout << "ptr memory address: " << ptr.get() << endl;
    cout << "ptr2 memory address: " << ptr2.get() << endl;
    cout << "ptr3 memory address: " << ptr3.get() << endl;

    return 0;
}