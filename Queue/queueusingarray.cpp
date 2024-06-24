#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class queue
{
public:
    int size;
    int *arr;
    int front, rear;
    ~queue()
    {
        delete[] arr;
    }
    queue(int size)
    {
        front = rear = -1;
        arr = new int[size];
        this->size = size;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return rear == size - 1;
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue overflow" << endl;
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
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
            if (front == rear)
            {
                front = rear = -1;
                return;
            }
            else
            {
                front++;
            }
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
            return arr[front];
        }
    }
};

int main()
{
    queue q(5);
     q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.push(6);
    cout << q.start() << endl;
    return 0;
}