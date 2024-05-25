#include <iostream>
using namespace std;

int printArr(int *arr, int n)
{
    if (n == 0)
    {
        return arr[n];
    }
    return arr[n] + printArr(arr, n - 1);
}
int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = printArr(arr, size - 1);
    cout << sum << endl;
    return 0;
}
