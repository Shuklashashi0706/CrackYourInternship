#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string name = "aaaaad";
    int left = 0;
    string sleft;
    string sright;
    int right = name.size() - 1;
    int count = 0;
    while (left < name.size() - 1)
    {
        sleft += name[left];
        sright = name[right] + sright;
        if (sleft == sright)
        {
            count = sleft.size();
        }
        left++; 
        right--;
    }
    cout << " " << count << endl;
    return 0;
}