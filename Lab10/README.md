# Lesson 3: new and delete exercise 3

## LAB 3 - Binary Tree

### Objectives 3

Binary tree's are data structures that have a hierarchical form and represent trees whose elements have a maximum number of two children. These children are called the left and the right child. The binary tree root represents the top node. A node that has at least one child is considered a parent of its child. A leaf is a node that has no children.

### Steps 3

1. Create class called binary_tree
1. Create structure called node
1. Declare 4 attributes in structure: integer data, two pointers to the same type of structure,called left and right
1. Declare main pointer to structure node type called root
1. This pointer is attribute of class binary_tree
1. This pointer is going to containt all data related to binary tree trought connectin nodes
1. Declare two methods called add and search
1. Add needs to have logic which will be dependant from data attribute and check for its place of creation on left or right side
1. Search needs to be implemented as recursive function
1. Check for nullptr in search and call it again on fulfilled condition(< or >)
1. First function doesn't have return type
1. Second function indicates its success by sending boolean values
1. Both class methods are wrappers for two private class method which are going to be implemented recursively for easier usage. 
1. Private functions are using another input parameter -> node pointer
1. This is designed like this for passage of pointers ( left, right)
1. Declare two constructors and destructors
1. One of the constructor - destructor pair is going to be part of node structure 
1. Second pair is going to be of class
1. Constructors in structure is used to declare new node (Pointers are NULL, data is set)
1. Constructor in class is esentially wrapper for stucture constructor
1. Structure destructor deletes left and right pointers
1. Class destructor deletes root pointer
1. Test everything in main
