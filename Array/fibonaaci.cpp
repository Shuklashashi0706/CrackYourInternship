#include <iostream>
#include <vector>
using namespace std;

int fib(vector<double> &arr, int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        return fib(arr, n - 1) + fib(arr, n - 2);
    }
}
int main()
{
    vector<double> arr;
    int n;
    arr.push_back(0);
    arr.push_back(1);
    cin >> n;
    int res = fib(arr, n);
    cout << res;
    cout << endl;
    return 0;
}