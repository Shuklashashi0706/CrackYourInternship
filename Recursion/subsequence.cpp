#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subs(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // not included
    subs(arr, index + 1, n, ans, temp);
    // included
    temp.push_back(arr[index]);
    subs(arr, index + 1, n, ans, temp);
    temp.pop_back();
}

int main()
{
    int arr[] = {1, 2, 3};
    // string name = "Sha";
    vector<vector<int>> ans;
    vector<int> temp;
    // vector<string> ans;
    // string temp;
    int len = sizeof(arr) / sizeof(arr[0]);
    // int len = name.size();
    subs(arr, 0, len, ans, temp);
    // for string
    //  for (int i = 0; i < ans.size(); i++)
    //  {

    //     cout << ans[i] << endl;
    // }
    // for integer
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