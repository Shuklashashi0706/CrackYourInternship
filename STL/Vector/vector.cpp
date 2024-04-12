#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // initializing vector : vector<int> v(size,initialization)
    vector<int> v;

    // addition operation
    v.push_back(3);
    v.push_back(1);
    v.push_back(23);
    v.push_back(-1);
    v.push_back(4);

    // delete operation
    // v.pop_back();
    // v.erase(v.begin()+0);
    // v.clear();
    cout << "Size:" << v.size() << "\n";
    cout << "Capacity:" << v.capacity() << "\n";
    // cout << v.front() << "\n";
    // cout << v.back() << "\n";
    // cout << v.at(2) << "\n";
    // cout<<v.empty()<<"\n";
    // sort(v.begin(), v.end());                 // increasing order
    // sort(v.begin(), v.end(), greater<int>()); // decreasing order
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "\t";
    }
    cout<<"\n";
    // sort(v.begin(),v.end());
    // cout<<binary_search(v.begin(),v.end(),14)<<endl;
    cout<<find(v.begin(),v.end(),4)-v.begin()<<endl;
    return 0;
}