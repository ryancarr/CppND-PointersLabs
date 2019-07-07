/* This code is a fragment from the final project for this Section of the class. */

// Collect garbage. Returns true if at least
// one object was freed.
template <class T, int size>
bool Pointer<T, size>::collect()
{
    bool memfreed = false;
    typename std::list<PtrDetails<T> >::iterator p;
    do
    {
        // Scan refContainer looking for unreferenced pointers.
        for (p = refContainer.begin(); p != refContainer.end(); p++)
        {
            // If in-use, skip.
            if(p->refcount > 0)
                continue;
            
            memfreed = true;
            
            // Remove unused entry from refContainer.
            refContainer.remove(*p);

            // Free memory unless the Pointer is null.
            if(p->memPtr)
            {
                if(p->isArray)
                    delete[] p-memPtr;
                else
                    delete p->memPtr;
            }
            
            // Restart the search.
            break;
        }
    } while (p != refContainer.end());
    return memfreed;
}

// Destructor for Pointer.
template <class T, int size>
Pointer<T, size>::~Pointer()
{
    typename std::list<PtrDetails<T> >::iterator p;
    p = findPtrInfo(addr);
    
    // TODO: Finalize Pointer destructor
    // decrement ref count
    p->refCount--;
    
    // Collect garbage when a pointer goes out of scope.
    collect();

    // For real use, you might want to collect unused memory less frequently,
    // such as after refContainer has reached a certain size, after a certain number of Pointers have gone out of scope,
    // or when memory is low.
}