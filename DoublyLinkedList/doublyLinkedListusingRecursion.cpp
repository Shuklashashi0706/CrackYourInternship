#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
node *createLinkedList(int arr[], int index, node *add, int size)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp = new node(arr[index]);
    temp->prev = add;
    temp->next = createLinkedList(arr, index + 1, temp, size);
    return temp;
}

node *insertAtpos(node *head, int k, int data)
{
    node *curr = head;
    while (--k)
    {
        curr = curr->next;
    }
    node *temp = new node(data);
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
    temp->next->prev = temp;
    return head;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, 0, NULL, size);
    int k = 0;
    int data = 46;
    head = insertAtpos(head, k, data);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}