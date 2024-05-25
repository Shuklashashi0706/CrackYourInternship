#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkPal(string str, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (str[start] != str[end])
    {
        return 0;
    }
    return checkPal(str, start + 1, end - 1);
}

int main()
{
    string name = "abcba";
    int start = 0;
    int end = name.size()-1;
    cout << checkPal(name, start, end) << endl;
    return 0;
}