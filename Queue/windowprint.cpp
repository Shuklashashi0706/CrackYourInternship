#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void display(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 6, 2, 7, 8, 11};
    int k = 3;
    queue<int> q;
    int n = sizeof(arr) / sizeof(arr[0]);
    // do it using queue
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    // O(n2) approach
    //  int n = (sizeof(arr) / sizeof(arr[0])) - k;
    //  for (int i = 0; i <= n; i++)
    //  {
    //      for (int j = i; j < i + k; j++)
    //      {
    //          cout << arr[j] << "\t";
    //      }
    //      cout << endl;
    //  }
    return 0;
}