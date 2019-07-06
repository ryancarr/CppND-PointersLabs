# Lesson 3 - New and Delete LAB

## LAB 1

### Objectives 1

We are going to use new and delete operators for memory management. In this example we are going to try to allocate piece of memory for storage of integer number 10. After that, we are going to use delete operator for freeing occupied memory before program exits. This is done to prevent memory leakage. With this approach, where we always track our memory with pairing every new with delete we are assuring our memory is always released after usage.

### Steps 1

1. Declare basic include  -> iostream
1. Declare main function
1. Use pointer syntax to declare integer pointer
1. use new operator to allocate memory space for one integer number via new syntax
1. Assign that operation to declared pointer
1. Print its address and value to make sure that we have right information
1. Release occupied space before exiting
