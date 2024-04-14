#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{4,-6,2,8};
    bool found = false;
    // O(n) approach
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        count += v[i];
    }
    int countl = 0;
    for (int i = 0; i < v.size(); i++)
    {
        countl += v[i];
        if (countl == (count - countl))
        {
            found = true;
            break;
        }
    }

    // O(n^2) approach
    //  for (int i = 0; i < v.size() - 1; i++)
    //  {
    //      int suml = 0, sumr = 0;
    //      for (int j = 0; j <= i; j++)
    //      {
    //          suml += v[j];
    //      }
    //      for (int j = i+1; j < v.size(); j++)
    //      {
    //          sumr += v[j];
    //      }
    //      if(sumr == suml){
    //          found=true;
    //          break;
    //      }
    //  }
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "NOt found" << endl;
    }
    return 0;
}
