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

namespace custom
{
    template <class T>
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
            bool isEmpty();
            T PopBack();
            T PopFront();
            bool PushBack(T value);
            bool PushFront(T value);
            int Size();
    };
}