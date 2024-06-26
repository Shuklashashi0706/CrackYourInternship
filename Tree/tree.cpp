#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int main()
{
    queue<node *> q;
    int x;
    cin >> x;
    node *root = new node(x);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        cout<<"Enter the left child of "<<temp->data<<" ";
        cin >> x;
        q.pop();
        if (x != -1)
        {
            temp->left = new node(x);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" ";
        cin >> x;
        if (x != -1)
        {
            temp->right = new node(x);
            q.push(temp->right);
        }
    }
    return 0;
}