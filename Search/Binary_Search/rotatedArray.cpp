#include <iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&arr){
    int temp = arr[arr.size()-1];
    for(int i = arr.size()-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    rotate(arr);
    rotate(arr);
    rotate(arr);
    return 0;
}