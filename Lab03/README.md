# Lab 3

## Objectives 3

In this example we are going to try to create dynamic array for integers. With this we can get primitive overview of how some of the popular container libraries in C++ work, such as : vector, queqe, stack etc. We know that dynamic declaration of array was initially supported in C++, but we don't have option to do resize or similar operation once array has been declared. Via pointers and access to memory it is pretty simple. So we are going to try to create couple of functions. First one is "createArr" which will create our array with specified size as input. Second one is going to be "resizeArr" which will resize our array and preserve our data. For the purpose of this example, to preserve simplicity we will only allow to expand our array to specified number of places.

## Steps 3

1. include standard library iostream
1. Declare createArr function. Its input parameters are just integer value which represent size of array.
1. return type of this function is going to be pointer to integer values.
1. Declare second function which will have input as integer value. This value is going to represent number of places with which we are going to expand our array
1. declare main function.
1. first function is going to allocate block of memory for integers. Its size is going to be input parameter.
1. first function needs to declare pointer which will show to the newly allocated memory block
1. Return that pointer as return value of the function
1. second function is going to have three parameters,int pointer which will carry our array, and int variable, which will indicate how much we are going to expand our array and size variable, representing original size
1. After that we need to create new pointer which will show to the newly allocated space which expanded by number of places specified by our input parameter. After using for loop we can copy data from old array to new one
1. before exiting our function we need to delete old array memory block using delete[] operator
1. Return value of our function is going to be newly created pointer, thus our return type of function is going to be pointer of type int
1. in main function we can ask for input of size of the array.
1. After successful input we can add  our data via for loop
1. Ask from user expansion info
1. Expand our array with second function
1. Print expanded array
