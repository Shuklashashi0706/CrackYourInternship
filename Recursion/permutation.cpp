#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void permut1(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<int> &visited)
// {
//     if (visited.size() == temp.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < visited.size(); i++)
//     {
//         if (visited[i] == 0)
//         {
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permut1(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }
void permut(vector<int> arr, vector<vector<int>> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<int> used(21, 0);
    for (int i = index; i < arr.size(); i++)
    {
        if (used[arr[i] + 10] == 0)
        {
            swap(arr[i], arr[index]);
            permut(arr, ans, index + 1);
            swap(arr[i], arr[index]);
            used[arr[i] + 10] = 1;
        }
    }
}

int main()
{
    vector<int> arr = {1, 1, 3};
    vector<vector<int>> ans;
    // int len = sizeof(arr) / sizeof(arr[0]);
    // vector<int> visited(len, 0);
    // permut1(arr, ans, temp, visited);
    permut(arr, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}