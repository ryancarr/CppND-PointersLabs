template <typename T>
class PtrDetails
{
    public:
        int refcount;
        T *memPtr;
        bool isArray;
        int arraySize;

        PtrDetails(T *ptr, int size = 0) : memPtr(ptr), arraySize(size) { }
};

template <typename T>
bool operator==(const PtrDetails<T> &obj_1,
                const PtrDetails<T> &obj_2)
{
    return obj_1 == obj_2;
}