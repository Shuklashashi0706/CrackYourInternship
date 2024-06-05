#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
// // insertion at start
// node *createLinkedList(int arr[], int size, node *head)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp = new node(arr[i]);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     return head;
// }

// insertion at end
node *createLinkedList(int arr[], int size, node *head)
{
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *curr = head;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            node *temp = new node(arr[i]);
            curr->next = temp;
            temp->prev = curr;
        }
    }
    return head;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, len, head);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}