#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void toh(int n, int src, int help, int dest,int &sum)
{
    if (n == 1)
    {
        cout << "Move " << n << " from " << src << " to " << dest << endl;
        sum++;
        return;
    }
    toh(n - 1, src, dest, help);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    sum++;
    toh(n - 1, help, src, dest);
}

int main()
{
    int n = 5;
    int sum =0;
    toh(n, 1, 2, 3,sum);
    cout << sum << endl;
    return 0;
}