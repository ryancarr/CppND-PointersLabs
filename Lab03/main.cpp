#include <iostream>

int* createArr(int size)
{
    int *ptr = new int[size];
    return ptr;
}

int* expandArr(int *ptr, int size, int expand)
{
    int *newPtr = new int[size + expand];
    
    for(int i = 0; i < size; i++)
        newPtr[i] = ptr[i];
    
    delete[] ptr;
    return newPtr;
}

int main()
{
    int size, expand;

    std::cout << "What is the size of the array: ";
    std::cin >> size;

    int *arr = createArr(size);

    for(int i = 0; i < size; i++)
        arr[i] = i * i;
    
    std::cout << std::endl;

    std::cout << "How much bigger would you like to make the array: ";
    std::cin >> expand;

    arr = expandArr(arr, size, expand);

    for(int i = 0; i < size + expand; i++)
        arr[i] = i * i;

    for(int i = 0; i < size + expand; i++)
        std::cout << arr[i] << " ";
    
    std::cout << std::endl;

    delete[] arr;
    return 0;
}