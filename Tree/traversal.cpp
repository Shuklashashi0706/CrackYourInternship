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

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = BinaryTree();
    cout << "Preorder:" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder:" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder:" << endl;
    postorder(root);
    cout << endl;
    return 0;
}