// Find the index of element in array even if it there or not
#include <iostream>
using namespace std;
int main()
{
    int n = 9, key;
    int arr[n] = {1, 2, 5, 6, 7, 8, 9, 10, 12};
    cout << "Enter key:" << endl;
    cin >> key;
    int index;
    int low = 0;
    int high = (sizeof(arr) / sizeof(arr[0])) - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        // value of low will give the index of element which is not present 
        index = low;
    }
    // Linear search : O(n)
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (arr[i] == key)
    //      {
    //          index = i;
    //          break;
    //      }
    //      else if (key < arr[i])
    //      {
    //          index = i;
    //          break;
    //      }
    //  }
    cout << index << endl;
    return 0;
}