#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void lower(string &str, int index)
{
    if (index == -1)
        return;
    str[index] = 'A' + str[index] - 'a';
    return lower(str, index - 1);
}

int main()
{
    string name = "shashi";
    int index = name.size() - 1;
    lower(name, index);
    cout << name << endl;
    return 0;
}