#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    node *temp = new node(x);
    cout << "Enter the left child of" << x << endl;
    temp->left = BinaryTree();
    cout << "Enter the right child of " << x << endl;
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    node *root = BinaryTree();
    return 0;
}