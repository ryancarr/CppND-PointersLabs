#include <iostream>
using namespace std;

template <typename T>
class binary_tree
{
    private:
        struct node
        {
            T data;
            node *left;
            node *right;

            node(int d): data(d), left(nullptr), right(nullptr) {}
            ~node()
            {
                if(left) delete left; 
                if(right) delete right;
            }
        };

        node *root;

        void add(T data, node *ptr)
        {
            if(data < ptr->data)
            {
                if(ptr->left)
                    add(data, ptr->left);
                else
                    ptr->left = new node(data);                
            }
            else if(ptr->data <= data)
            {
                if(ptr->right)
                    add(data, ptr->right);
                else
                    ptr->right = new node(data);                
            }
        }

        bool search(T data, node *ptr)
        {
            if(!ptr->left && !ptr->right)
            {
                if(ptr->data == data)
                    return true;
                return false;
            }
            
            if(ptr->data < data && ptr->left)
                search(data, ptr->left);
            else if(ptr->data >= data && ptr->right)
                search(data, ptr->right);
        }
    
    public:
        binary_tree(T data) { root = new node(data); }
        ~binary_tree() { if(root) delete root; }

        void addData(T data)
        {
            add(data, root);
        }

        bool searchItem(T data)
        {
            return search(data, root);
        }
};

int main()
{
    binary_tree<int> tree(2);
    tree.addData(10);
    tree.addData(1);
    tree.addData(20);
    tree.addData(0);

    std::cout<<tree.searchItem(0)<<std::endl;
    std::cout<<tree.searchItem(9)<<std::endl;
    tree.addData(11);
    std::cout<<tree.searchItem(11)<<std::endl;
    /* OUTPUT:
        1
        0
        1
    */
    return 0;
}