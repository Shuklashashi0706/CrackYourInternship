#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// //TC: O(n^2) SC : O(n)
// int winner(vector<bool> &person, int len, int index, int person_left, int k)
// {
//     if (person_left == 1)
//     {
//         for (int i = 0; i < len; i++)
//         {
//             if (person[i] == 0)
//             {
//                 return i;
//             }
//         }
//     }
//     int kill = (k - 1) % person_left;
//     while (kill--)
//     {
//         index = (index + 1) % len;
//         while (person[index] == 1)
//         {
//             index = (index + 1) % len;
//         }
//     }
//     person[index] = 1;
//     while (person[index] == 1)
//     {
//         index = (index + 1) % len;
//     }
//     return winner(person, len, index, person_left - 1, k);
// }

// Solving using Josephus algo
int winner(int len, int k)
{
    if (len == 1)
    {
        return 0;
    }
    return (winner(len - 1, k) + k) % len;
}

int main()
{
    vector<bool> person(5, 0);
    int k = 3;
    int len = person.size();
    int person_left = len;
    cout << winner(len, k);
    // cout << winner(person, len, 0, person_left, k)+1 << endl;
    return 0;
}