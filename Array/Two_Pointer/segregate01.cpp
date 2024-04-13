#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int start = 0;
    int end = v.size() - 1;
    int count = 0;
    while (start<=end)
    {

        if (v[start] == 0)
        {
            start++;
        }
        if (v[end] == 1)
        {
            end--;
        }
        if (start <= end)
        {
            if (v[start] != v[end])
            {
                count++;
                swap(v[start], v[end]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    // int count1 = 0, count0 = 0;
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     if (*it == 1)
    //     {
    //         count1++;
    //     }
    //     else
    //     {
    //         count0++;
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (count1)
    //     {
    //         v.at(i) = 1;
    //         count1--;
    //     }
    //     else
    //     {
    //         if (count0)
    //         {
    //             v.at(i) = 0;
    //             count0--;
    //         }
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << "\t";
    // }

    cout << "\n";
    return 0;
}
