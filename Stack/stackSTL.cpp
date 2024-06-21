#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        arr.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}