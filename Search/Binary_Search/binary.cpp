#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class binarySearch
{
public:
    int binary(vector<int> &arr, int key, int low, int high)
    {
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
                return mid + 1;
            else if (key > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
};

int
main()
{
    vector<int> arr;
    int n;
    int key;
    cout << "Enter size of array:" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    cout << "Enter key:" << endl;
    cin >> key;
    binarySearch obj;
    int res = obj.binary(arr,key,0,n-1);
    cout<<key<<"found at"<<res<<endl;
    return 0;
}