#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.back() << endl;
     cout << q.front() << endl;
    return 0;
}