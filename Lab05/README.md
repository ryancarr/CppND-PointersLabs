# Pointer Project LAB

## Description

Using pointers we are going to create first part of our project. In this lab using knowledge from pointers and references we are going to create our generic class called "PtrDetails". This class defines an element that is stored in the garbage collection information list.

## Steps

1. Declare generic class PtrDetails
1. Create generics via templates
1. all attributes and methods are going to be public, because they are going to be used by other classes
1. create attribute for refcount
1. create attribute memPtr as generic pointer for storage of basic info about memory
1. create bool attribute isArray for recognition of memory type allocated
1. create attribute arraySize for working with array allocation
1. Declare constructor for PtrDetails which will have two parameters
1. First constructor paremeter is going to be pointer and second which is not required, is going to be size of eventual array in memory
1. We need to construct logic of the constructor  which will set isArray attribute if size is larger then 0
1. Create overload operator == which will be used for comparison between to PtrDetails object in lists. It is mandatory
