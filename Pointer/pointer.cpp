#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pass1(vector<int> temp) // passing by value (changes remains in function)
{
    for (int i = 0; i < temp.size(); i++)
    {
        temp[i] = temp[i] + 10;
    }
}

void pass2(vector<int> &temp) // passing by reference (changes get reflected in the original variable)
{
    for (int i = 0; i < temp.size(); i++)
    {
        temp[i] = temp[i] + 10;
    }
}
int main()
{
    vector<int> v(3, 1);
    pass1(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
    pass2(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
    return 0;
}