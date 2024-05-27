#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int targetSum(int arr[], int index, int n, int target)
{
    if (target == 0)
        return 1;
    if (target < 0 || index == n)
        return 0;
    return targetSum(arr, index + 1, n, target) || targetSum(arr, index + 1, n, target - arr[index]);
}

int main()
{
    int arr[] = {1, 2, 3};
    int target = 3;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << targetSum(arr, 0, len, target) << endl;
    return 0;
}