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
            T PopBack();
            T PopFront();
            void Print();
            bool PushBack(T);
            bool PushFront(T);
            int Size() const;
    };

    template <typename T>
    List<T>::List()
    {
        head = NULL;
        tail = NULL;
        _size = 0;
    }
    
    template <typename T>
    List<T>::~List()
    {
        while(head)
        {
            Node *temp(head);
            head = head->next;
            delete temp;
        }
    }
    
    template <typename T>
    bool List<T>::isEmpty() const
    {
        return ( !head && !tail );
    }
    
    template <typename T>
    T List<T>::PopBack()
    {
        if(isEmpty()) return NULL;

        Node *temp = tail;
        T value = temp->data;
        tail = tail->prev;

        if(tail)
            tail->next = NULL;
        else
            head = NULL;

        delete temp;
        _size--;

        return value;
    }
    
    template <typename T>
    T List<T>::PopFront()
    {
        if(isEmpty()) return NULL;

        Node *temp = head;
        T value = temp->data;

        head = head->next;

        if(head)
            head->prev = NULL;
        else
            tail = NULL;
        
        delete temp;
        _size--;

        return value;
        
    }

    template <typename T>
    void List<T>::Print()
    {
        Node *ptr = head;

        while(ptr != NULL)
        {
            std::cout << ptr->data << " ";
            ptr = ptr->next;
        }

        std::cout << std::endl;
    }
    
    template <typename T>
    bool List<T>::PushBack(T value)
    {
        if(isEmpty())
            head = tail;
            
        Node *node = new Node(value, NULL, tail);
        if(!tail)
        {
            tail = node;
            head = node;
        } else if(node->prev)
        {
            node->prev->next = node;
            tail = node;
        } else
        {
            node->prev = tail;
            tail = node;
        }
        

        _size++;

        return true;
    }
    
    template <typename T>
    bool List<T>::PushFront(T value)
    {
        if(isEmpty())
            tail = head;

        Node *node = new Node(value, head, NULL);
        if(!head)
        {
            head = node;
            tail = node;
        } else if(node->next)
        {
            node->next->prev = node;
            head = node;
        } else
            head = node;
        
        _size++;
        
        return true;
    }
    
    template <typename T>
    int List<T>::Size() const
    {
        return _size;
    }
}

#endif