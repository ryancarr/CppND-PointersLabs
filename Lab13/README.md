## LAB 2

### Objectives 2

A shared_ptr is a container for raw pointers. It is a reference counting ownership model i.e. it upholds the reference count of its contained pointer in correlation with all of the shared_ptr copies. Basically, any time a new pointer points to a memory block an incrementation of the counter happens. Likewise, it decrements when the destructor of the object is called. With this example we are going to use common method when handling these type of pointers.

### Steps 2

1. Declare simple class called A
1. Add one method which is non - return type
1. Print something in it
1. Declare new pointer shared_ptr which is same type as declared class
1. Using constructor syntax,as part of declaration of pointer declare new class A instace 
1. Using pointer reference syntax "->" invoke class method
1. use .get() method to retrieve memory address from declared pointer
1. Use use_count method to display current number of references to pointer memory address
1. Try to print both addresses via get()
1. Use .reset() method to release first pointer memory
1. Try same thing
1. Notice that info is transfered to next pointer as copy from previous ones
