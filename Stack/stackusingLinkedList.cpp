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
class stack
{
public:
    node *top;
    int size; // actual size of stack
    stack()
    {
        top = NULL;
        size = 0;
    }
    // push
    void push(int value)
    {
        node *temp = new node(value);
        if (temp == NULL)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            cout << "Pushed " << top->data << " into stack" << endl;
            size++;
        }
    }
    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            node *temp = top;
            top = top->next;
            cout << "Popped " << temp->data << " from the stack" << endl;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    int isSize()
    {
        return size;
    }
};

int main()
{
    stack s;
    s.push(6);
    s.push(3);
    s.pop();
    cout << s.peek() << " " << s.isEmpty() << endl;
    return 0;
}