#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n = 1;
    int x = factorial(n);
    cout << x << endl;
    return 0;
}