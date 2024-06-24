#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class queue
{
public:
    node *front;
    node *rear;
    queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return front == NULL;
    }
    void push(int x)
    {
        if (isEmpty())
        {
            front = new node(x);
            rear = front;
        }
        else
        {
            rear->next = new node(x);
            rear = rear->next;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "underflow" << endl;
        }
        else
        {
            node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    int start()
    {
        if (isEmpty())
        {
            cout << "empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    queue q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    cout << q.start() << endl;
    return 0;
}