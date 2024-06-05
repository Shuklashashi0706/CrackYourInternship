#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *createLinkedList(int arr[], int size, int index)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = createLinkedList(arr, size, index + 1);
    return temp;
}

node *reverseLinkedList(node *curr, node *prev, node *head)
{
    if (curr->next == NULL)
    {
        curr->next = prev;
        head = curr;
        return head;
    }
    node *fut;
    fut = curr->next;
    curr->next = prev;
    return reverseLinkedList(fut, curr, head);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, len, 0);
    node *curr = head;
    node *prev = NULL;
    head = reverseLinkedList(curr, prev, head);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}