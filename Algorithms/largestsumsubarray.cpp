#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{2,3,7};
    // O(n) approach using Kadane's algo
    int max = INT_MIN;
    int prefix = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix += v[i];
        if (prefix > max)
            max = prefix;
        if (prefix < 0)
            prefix = 0;
    }
    // O(n^2) approach
    //  int max = INT_MIN;
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      int prefix = 0;
    //      for (int j = i; j < v.size(); j++)
    //      {
    //          prefix += v[j];
    //          if (prefix > max)
    //          {
    //              max = prefix;
    //          }
    //      }
    //  }
    cout << max << endl;
    return 0;
}