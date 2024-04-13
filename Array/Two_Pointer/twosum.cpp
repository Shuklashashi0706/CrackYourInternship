// array is sorted here
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int i, j;
    bool found = false;
    int start = 0;
    int end = n - 1;
    // two pointer approach
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            found = true;
            break;
        }
        if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << arr[start] << " " << arr[end] << " " << boolalpha << found << " " << endl;
    // brute force
    // for (i = 0; i < n; i++)
    // {
    //     for (j = i+1; j < n; j++)
    //     {
    //         int sum = v[i] + v[j];
    //         if (sum == target)
    //         {
    //             found =true;
    //             break;
    //         }
    //     }
    //     if(found){
    //         break;
    //     }
    // }

    // using binary search
    // for (int i = 0; i < n; i++)
    // {
    //     int y = target - arr[i];
    //     int start = i + 1;
    //     int end = n - 1;
    //     while (start <= end)
    //     {
    //         int mid = start + (end - start) / 2;
    //         if (arr[mid] == y)
    //         {
    //             found = true;
    //             break;
    //         }
    //         if (arr[mid] > y)
    //         {
    //             end = mid - 1;
    //         }
    //         else
    //         {
    //             start = mid + 1;
    //         }
    //     }
    //     if (found)
    //     {
    //         break;
    //     }
    // }
    // cout << boolalpha << found << endl;
    return 0;
}