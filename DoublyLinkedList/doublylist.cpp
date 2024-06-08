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
node *insertAtpos(node *head, int data, int pos)
{
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = new node(data);
        }
        else
        {
            node *temp = new node(data);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }

        if (curr->next == NULL)
        {
            node *temp = new node(data);
            temp->prev = curr;
            curr->next = temp;
        }
        else
        {
            node *temp = new node(data);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    return head;
}
node *deletionAtStart(node *head)
{
    if (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        if (head)
        {
            head->prev = NULL;
        }
    }
    return head;
}
node *deletionAtEnd(node *head)
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            node *curr = head;
            while (curr->next)
            {
                curr = curr->next;
            }
            curr->prev->next = NULL;
            delete curr;
        }
    }
    return head;
}

node *deletionAtpos(node *head, int pos)
{
    if (head != NULL)
    {
        // deletion at start
        if (pos == 1)
        {
            if (head != NULL)
            {
                node *temp = head;
                head = head->next;
                delete temp;
                if (head)
                {
                    head->prev = NULL;
                }
            }
        }
        else
        {
            node *curr = head;
            while (--pos)
            {
                curr = curr->next;
            }
            if (curr->next == NULL) // means last node
            {
                curr->prev->next = NULL;
                delete curr;
            }
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
            }
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
    int data = 5;
    int pos = 4;
    head = insertAtpos(head, data, pos);
    head = deletionAtStart(head);
    head = deletionAtEnd(head);
    pos = 1;
    head = deletionAtpos(head, pos);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}