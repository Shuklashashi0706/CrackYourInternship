#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{5, 10, 3, 2, 50, 80};
    int target = 15;
    int n = v.size();
    int start = 0;
    int end = n-1;
    int found = false;
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<"\t";
    }
    cout<<"\n";
    while(start<end){
        int diff = v.at(end)*v.at(start);
        if(diff == target){
            found = true;
            break;
        }
        if(diff > target){
            end--;
        }
        else{
            start++;
        }
    }
    cout<<v[start]<<" "<<v[end]<<" "<<endl;
    return 0;
}