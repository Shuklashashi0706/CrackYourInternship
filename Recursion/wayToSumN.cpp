#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int way(vector<int> arr, vector<vector<int>> &ans, int sum, vector<int> &temp)
{
    if (sum == 0)
    {
        ans.push_back(temp);
        return 1;
    }
    if (sum < 0)
    {
        return 0;
    }
    int ans1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
        ans1 += way(arr, ans, sum-arr[i], temp);
        temp.pop_back();
    }
    return ans1;
}

int main()
{
    vector<int> arr = {3, 5, 6};
    int sum = 6;
    vector<vector<int>> ans;
    vector<int> temp;
    way(arr, ans, sum, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[j].size(); j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}