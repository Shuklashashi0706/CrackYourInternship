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
int checkPal(node *head)
{
    int count = 0;
    node *temp = head;
    node *tail = NULL;
    while (temp)
    {
        count++;
        tail = temp;
        temp = temp->next;
    }
    int mid = count / 2;
    node *curr = head;
    node *prev = NULL;
    while (mid--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    prev = NULL;
    node *fut = NULL;
    while (curr)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    node *head1 = prev;

    node *temp1 = head;
    node *temp2 = head1;
    while (temp1)
    {
        if (temp1->data != temp2->data)
        {
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        return 1;
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;
    head = createLinkedList(arr, len, 0);
    cout << "PAl:" << checkPal(head) << endl;
    // node *temp = head;
    // while (temp)
    // {
    //     cout << temp->data << endl;
    //     temp = temp->next;
    // }
    return 0;
}