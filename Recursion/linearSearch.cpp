#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int linearSearch(int *arr, int n, int index, int x)
{
    if (index == n)
        return -1;
    if (arr[index] == x)
        return index;
    return linearSearch(arr, n, index + 1, x);
}
int main()
{
    int arr[] = {1, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    cout << "Index " << linearSearch(arr, n,0, x) << endl;
    return 0;
}