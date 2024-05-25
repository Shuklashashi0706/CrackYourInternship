#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(string &str, int start, int end)
{
    if (start >= end)
        return;
    swap(str[start], str[end]);
    return reverse(str, start + 1, end - 1);
}

int main()
{
    string name = "Shashi";
    int start = 0;
    int end = name.size() - 1;
    reverse(name, start, end);
    cout << name << endl;
    return 0;
}