// Find first and last position of element in sorted array
#include <iostream>
using namespace std;
int main()
{
    int n = 10, key;
    int arr[n] = {1, 2, 2, 2, 3, 3, 4, 5, 6, 7};
    cout << "Enter key:" << endl;
    cin >> key;
    int start = 0, end = n - 1, mid;
    int first = -1, last = -1; // to record the index of first and last occurence of element
    //to find the first occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        //we need to look for first occurence in left side,so end=mid-1
        if (arr[mid] == key)
        {
            first=mid;
            end=mid-1;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    start=0,end=n-1;
    //to find the last occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        //we need to look for last occurence in right side,so start=mid+1
        if (arr[mid] == key)
        {
            last=mid;
            start=mid+1;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout<<"First: "<<first<<" Last : " << last<<endl;
    return 0;
}