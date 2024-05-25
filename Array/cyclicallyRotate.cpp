#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(int *arr, int len)
{
    int n = arr[0];
    for (int i = 0; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[len - 1] = n;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int k = 3;
    int len = sizeof(arr) / sizeof(arr[0]);
    while (k % len)
    {
        rotate(arr, len);
        k--;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}