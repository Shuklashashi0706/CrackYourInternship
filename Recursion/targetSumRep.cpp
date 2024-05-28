// to find no of subsets such that it will sum to target with the repetition of elements
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int targetSum(int arr[], int index, int n, int sum)
{
    if (sum == 0)
        return 1;
    if (index == n || sum < 0)
        return 0;
    int exclude = targetSum(arr, index + 1, n, sum);
    int include = targetSum(arr, index, n, sum - arr[index]);
    return exclude + include;
}

int main()
{
    int arr[] = {2, 3, 4};
    int sum = 6;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << targetSum(arr, 0, len, sum) << endl;
    return 0;
}