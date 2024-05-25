#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    if (n < 0)
    {
        return;
    }
    printArr(arr, n - 1);
    cout << arr[n] << " ";
}
int main()
{
    int arr[] = {3, 7, 6, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size - 1);
    return 0;
}
