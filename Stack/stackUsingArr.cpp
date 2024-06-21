#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;
    bool flag;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
        flag = 1;
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            flag = 0;
            cout << "Pushed " << arr[top] << " into stack" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            top--;
            cout << "Popped " << arr[top + 1] << " from the stack" << endl;
            if (top == -1)
            {
                flag = 1;
            }
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isSize()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return top + 1;
        }
        return 0;
    }
};

int main()
{
    Stack stack(3);
    stack.push(-1);
    if (!stack.isEmpty())
    {
        cout << stack.peek() << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
    return 0;
}