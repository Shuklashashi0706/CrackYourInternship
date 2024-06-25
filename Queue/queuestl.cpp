#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    // queue print
    int n = q.size();
    while (n > 0)
    {
        cout << q.front()<<"\t";
        q.push(q.front());
        q.pop();
        n--;
    }
    // queue reversal
    //  vector<int> arr;
    //  while (!q.empty())
    //  {
    //      arr.push_back(q.front());
    //      q.pop();
    //  }
    //  int i = arr.size() - 1;
    //  while (i >= 0)
    //  {
    //      q.push(arr[i]);
    //      i--;
    //  }
    //  while (!q.empty())
    //  {
    //      cout << q.front() << "\t";
    //      q.pop();
    //  }
    return 0;
}