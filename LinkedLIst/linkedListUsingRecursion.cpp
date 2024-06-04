#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

// //for adding node at end
// node *createLinkedList(int arr[], int len, int index)
// {
//     if (index == len)
//     {
//         return NULL;
//     }
//     node *temp;
//     temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, len, index + 1);
//     return temp;
// }

// for adding node at start
node *createLinkedList(int arr[], int len, int index, node *prev)
{
    if (index == len)
    {
        return prev;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr, len, index + 1, temp);
}

int main()
{
    node *head;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    head = createLinkedList(arr, len, 0, NULL);
    node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << " " << endl;
    // // deletion at start
    // if (head != NULL)
    // {
    //     temp = head;
    //     head = temp->next;
    //     delete temp;
    // }

    // // deletion at end
    // if (head != NULL) //checking if linked list exists
    // {
    //     if (head->next == NULL) //checking if linked list has only one node
    //     {
    //         node *temp = head;
    //         head = NULL;
    //         delete temp;
    //     }
    //     else
    //     {
    //         node *curr;
    //         curr = head;
    //         node *prev = NULL;
    //         while (curr->next != NULL)
    //         {
    //             prev = curr;
    //             curr = curr->next;
    //         }
    //         prev->next = NULL;
    //         delete curr;
    //     }
    // }

    // deletion at position
    if (head != NULL) // checking if linked list exists
    {
        if (head->next == NULL) // checking if linked list has only one node
        {
            node *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            node *curr;
            curr = head;
            int pos = 4;
            if (pos == 0)
            {
                head = curr->next;
                delete curr;
            }
            else
            {
                node *prev = NULL;
                while (pos--)
                {
                    prev = curr;
                    curr = curr->next;
                }
                prev->next = curr->next;
                delete curr;
            }
        }
    }

    temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}