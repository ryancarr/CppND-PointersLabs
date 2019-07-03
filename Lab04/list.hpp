// Second attribute of class list is going to be structure type pointer called head, which is representing pointer to the beginning of the list
// Third attribute is tail pointer, which is in charge of showing to the end of the list
// Implement default constructor for initial declaration of new lists
// Define and implement destructor to prevent memory leakage of our class instances
// Destructor needs to remove every object in a list
// Use head pointer to delete every linked list member
// Implement push_front for adding new nodes on the beginning of the list
// Implement push_back ( same principle)
// Implement pop back and pop front which will we based on same logic as push method, but instead of adding elements, they will delete values
// implement print method logic which will use instance of list object to print stored values
// Protect every method logic from empty lists
#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

using std::ostream;

namespace custom
{
    template <typename T>
    class List
    {
        private:
            struct Node
            {
                T data;
                Node *next;
                Node *prev;

                Node(T value, Node *_next, Node *_prev) : data(value), next(_next), prev(_prev) { }
            };

            int _size;
            Node *head;
            Node *tail;

        public:
            List();
            ~List();
            bool isEmpty() const;
            T PopBack() const;
            T PopFront() const;
            void Print();
            bool PushBack(T);
            bool PushFront(T);
            int Size() const;
    };

    template <typename T>
    List<T>::List()
    {
        head = nullptr;
        tail = nullptr;
        _size = 0;
    }
    
    template <typename T>
    List<T>::~List()
    {
        while(!this->isEmpty())
            this->PopFront();
    }
    
    template <typename T>
    bool List<T>::isEmpty() const
    {
        return ( (head == nullptr) && (tail == nullptr) );
    }
    
    template <typename T>
    T List<T>::PopBack() const
    {
    }
    
    template <typename T>
    T List<T>::PopFront() const
    {
    }

    template <typename T>
    void List<T>::Print()
    {
        if(this->isEmpty())
        {
            std::cout << "List is empty" << std::endl;
            return;
        }

        Node *ptr = head->next;

        while(ptr->next)
        {
            std::cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    
    template <typename T>
    bool List<T>::PushBack(T value)
    {
    }
    
    template <typename T>
    bool List<T>::PushFront(T value)
    {
    }
    
    template <typename T>
    int List<T>::Size() const
    {
        return _size;
    }
}

#endif