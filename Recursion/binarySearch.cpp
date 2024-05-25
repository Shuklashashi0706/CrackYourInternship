#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary(int *arr, int start, int end, int x)
{
    if (start > end)
    {
        return -1;
    }
    int mid = end + (start - end) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
    {
        return binary(arr, start, mid - 1, x);
    }
    else
    {
        return binary(arr, mid + 1, end, x);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index " << binary(arr, 0, n - 1, x);
    return 0;
}