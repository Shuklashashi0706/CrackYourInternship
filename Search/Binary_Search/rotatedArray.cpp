#include <iostream>
#include<vector>
using namespace std;

void searchMin(vector<int>&arr){
    int low = 0 , high = arr.size()-1;
    int ans = arr[0];
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] >= arr[0]) // left hand side is sorted , go to right
        {
            low = mid+1;
        }else{ //right hand side is sorted , go to left
            ans = arr[mid];
            high = mid - 1;
        }
    }
    cout<<"Element:" << ans <<endl;
}

int main()
{
    vector<int> arr = {-1,1,2,3,4};
    searchMin(arr);
    return 0;
}