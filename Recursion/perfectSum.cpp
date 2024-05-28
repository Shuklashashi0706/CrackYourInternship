#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int perfectSum(int arr[], int index, int n, int sum, vector<int> &temp, vector<vector<int>> &ans)
{
    if (sum == 0)
    {
        ans.push_back(temp);
        return 1;
    }
    if (index == n || sum < 0)
        return 0;
    int exclude = perfectSum(arr, index + 1, n, sum, temp, ans);
    temp.push_back(arr[index]);
    int include = perfectSum(arr, index+1, n, sum - arr[index], temp, ans);
    temp.pop_back();
    return exclude + include;
}

int main()
{
    int arr[] = {1, 2, 3, 1};
    int sum = 3;
    vector<int> temp;
    vector<vector<int>> ans;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << perfectSum(arr, 0, len, sum, temp, ans) << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}