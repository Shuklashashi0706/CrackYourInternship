#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

node *insert(node *root, int target)
{
    if (!root)
    {
        node *temp = new node(target);
        return temp;
    }
    if (target < root->data)
        root->left = insert(root->left, target);
    else
        root->right = insert(root->right, target);
    return root;
}
void inorder(node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
int search(node *root, int target)
{
    if (!root)
        return 0;
    if (root->data == target)
        return 1;
    int found;
    if (target < root->data)
        return search(root->left, target);
    else
        return search(root->right, target);
}
int main()
{
    int arr[] = {1, 3, 2, 4, 5, 6, 7};
    node *root = NULL;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        root = insert(root, arr[i]);
    }
    int target = 1;
    cout << "Found:" << search(root, target) << endl;
    inorder(root);
    return 0;
}