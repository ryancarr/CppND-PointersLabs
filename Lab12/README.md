# Smart pointers lab

## LAB 1

## Objectives 1

We are going to illustrate use of unique_ptr  in C++. With this example we are going to use common method when handling these type of pointers.

## Steps 1

1. Declare simple class called A
1. Add one method which is non - return type
1. Print something in it
1. Declare new pointer unique_ptr which is same type as declared class
1. Using constructor syntax,as part of declaration of pointer declare new class A instace 
1. Using pointer reference syntax "->" invoke class method
1. use .get() method to retrieve memory address from declared pointer
1. Use move method to transfer memory data from first pointer to second one
1. Try to print both addresses via get()
1. Add third pointer
1. Try same thing
1. Notice that info is transfered to next pointer without leaving copies in previous ones
