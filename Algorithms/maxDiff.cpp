#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  vector<int>v{9,5,8,12,2,3,7,4};
  for(int i=0;i<v.size();i++){
    int l = v[i];
    sort(v.begin(),v.end());

  }
  return 0;
}
