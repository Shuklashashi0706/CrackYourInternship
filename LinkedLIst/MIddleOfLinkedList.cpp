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
node *middle(node *head)
{
    // solving using the concept of slow pointer and fast poiner
    node *fast = head;
    node *slow = head;
    while (fast && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

    // int count = 0;
    // node *temp = head;
    // while (temp)
    // {
    //     count++;
    //     temp = temp->next;
    // }
    // int mid = count / 2;
    // temp = head;
    // while (mid--)
    // {
    //     temp = temp->next;
    // }
    // return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, len, 0);
    node *mid = middle(head);
    cout <<"Middle:"<< mid->data << endl;
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}