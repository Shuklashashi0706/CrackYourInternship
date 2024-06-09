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

node *createLinkedList(int arr[], int len, int index)
{
    if (index == len)
    {
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = createLinkedList(arr, len, index + 1);
    return temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head;
    int len = sizeof(arr) / sizeof(arr[0]);
    head = createLinkedList(arr, len, 0);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    temp = head;
    while (temp->next != head)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    return 0;
}