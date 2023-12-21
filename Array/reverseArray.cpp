#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int size, x;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr.at(i) << "\t";
    }
    int left = 0, right = size - 1;
    while (left < right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr.at(i) << "\t";
    }
    return 0;
}