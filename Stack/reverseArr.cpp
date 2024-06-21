#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void insert(stack<int> &st, int x)
{
    int n = st.size();
    vector<int> space;
    while (!st.empty())
    {
        space.push_back(st.top());
        st.pop();
    }
    st.push(x);
    int i = space.size() - 1;
    while (i >= 0)
    {
        st.push(space[i]);
        i--;
    }
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    int x = 100;
    insert(s, x);
    while (!s.empty())
    {
        cout << s.top() << "\t";
        s.pop();
    }
    cout << endl;
    return 0;
}