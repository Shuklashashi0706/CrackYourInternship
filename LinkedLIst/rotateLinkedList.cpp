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
node *rotate(node *head, int k)
{
    node *temp = head;
    int count = 0;
    node *tail;
    if (head == NULL)
    {
        return head;
    }
    if (k == 0)
    {
        return head;
    }
    while (temp)
    {
        count++;
        tail = temp;
        temp = temp->next;
    }
    node *curr = head, *prev = NULL;
    count -= k;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    tail->next = head;
    head = curr;
    return head;
}

int main()
{
    int arr[] = {11,23,17,21,17};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, len, 0);
    int k = 2;
    head = rotate(head, k % len);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}