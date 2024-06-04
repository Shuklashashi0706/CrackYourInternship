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

void insertAtpos(node *head, int data, int x)
{
    if (head == NULL)
    {
        head = new node(data);
    }
    node *tail;
    tail = head;
    while (tail->data != x)
    {
        tail = tail->next;
    }
    node *temp;
    temp = new node(data);
    temp->next = tail->next;
    tail->next = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head;
    head = NULL;
    // // insertion at start
    // for (int i = 0; i < len; i++)
    // {
    //     if (head == NULL)
    //     {
    //         head = new node(arr[i]);
    //     }
    //     else
    //     {
    //         node *temp;
    //         temp = new node(arr[i]);
    //         temp->next = head;
    //         head = temp;
    //     }
    // }
    // insertion at end
    node *tail = NULL;
    for (int i = 0; i < len; i++)
    {
        // if (head == NULL)
        // {
        //     head = new node(arr[i]);
        // }
        // else
        // {
        //     node *traverse = head;
        //     node *temp;
        //     while (traverse->next != NULL)
        //     {
        //         traverse = traverse->next;
        //     }
        //     temp = new node(arr[i]);
        //     traverse->next = temp;
        // }
        // we dont need to traverse everytime for adding node in the end , we can create one variable that will be poiting to the last node
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new node(arr[i]);
            tail = tail->next;
        }
    }

    // insertion at particular position
    int x = 3;
    int data = 20;
    insertAtpos(head, data, x);

    // printing values of linked list
    node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}