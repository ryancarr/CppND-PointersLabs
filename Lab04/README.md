# Lab 4

## Objectives 4

Doubly linked list is a type of data structure that is made up of so called objects that are created using self referential structures. Each of these nodes contain three attributes, namely the value and the reference to the next list object and the reference to the previous list object.

Only the reference to the first list object is required to access the whole linked list. This is known as the beggining. The last node in the list points to nothing so it stores NULL in that part. Also the doubly linked list can be traversed in both directions as each object points to its previous and next list object.
In this lab we are going to create this type of list, which features 5 methods: push back, push front, pop back and pop front. Also, helper function empty is going to be implenmented. Push_back is going to add values to the end of the list, while push_front is going to add values to the beginning to the list. We have complementary operations of pop back and front which deleting elements from end or beginning of the list. Method empty is used for checks of empty list.

## Steps 4

1. Create namespace custom
1. in this namespace design class list
1. this class needs to have node structure which will represent elemental object of list
1. In this structure we are going to implement: value store attribute, pointer to same structure type which we will use to store data about previous and next element. 
1. Besides that, implementation of constructor which will handle initializations of attriute is required
1. Second attribute of class list is going to be structure type pointer called head, which is representing pointer to the beginning of the list
1. Third attribute is tail pointer, which is in charge of showing to the end of the list
1. Implement default constructor for initial declaration of new lists
1. Define and implement destructor to prevent memory leakage of our class instances
1. Destructor needs to remove every object in a list
1. Use head pointer to delete every linked list member
1. Implement push_front for adding new nodes on the beginning of the list
1. Implement push_back ( same principle)
1. Implement pop back and pop front which will we based on same logic as push method, but instead of adding elements, they will delete values
1. implement print method logic which will use instance of list object to print stored values
1. Protect every method logic from empty lists
