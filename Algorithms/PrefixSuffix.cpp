#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{6, 4, 5, -3, 2, 8};
    vector<int> prefix;
    vector<int> suffix;
    prefix.push_back(v.at(0));
    for (int i = 1; i < v.size(); i++)
    {
        prefix.push_back(prefix.at(i - 1) + v.at(i));
    }
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix.at(i) << "\t";
    }
    cout<<"\n";
    suffix.push_back(v.at(v.size() - 1));
    for (int i = v.size() - 2,j=1; i >= 0; i--,j++)
    {
        suffix.push_back(suffix.at(j - 1) + v.at(i));
    }
    for (int i = 0; i < suffix.size(); i++)
    {
        cout << suffix.at(i) << "\t";
    }
    cout << "\n";
    return 0;
}
