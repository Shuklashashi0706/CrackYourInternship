#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subs(int arr[], int index, int n, int sum, vector<int> &ans)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }
    // not included
    subs(arr, index + 1, n, sum, ans);
    // included
    subs(arr, index + 1, n, sum + arr[index], ans);
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;
    int len = sizeof(arr) / sizeof(arr[0]);
    subs(arr, 0, len, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}