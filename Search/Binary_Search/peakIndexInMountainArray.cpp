#include <iostream>
#include<vector>
using namespace std;

//Using linear Search (O(n))
void peakIndexLinear(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i] > arr[i-1] && arr[i]>arr[i+1]){
            cout<<"Peak index:"<<i<<" Element : "<<arr[i]<<endl;
            break;
        }
    }
}
//Uing Binray search O(log(n))
void peakIndexBinary(vector<int>&arr){
    int low =0,high =arr.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"Index : "<<mid<<" Element:"<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid] > arr[mid-1] ){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
}

int main()
{
    vector<int> array = {1,2,3,4,5,6,7,-1,0,1}; //Length of mountain array >=3
    peakIndexLinear(array);
    peakIndexBinary(array);
    return 0;
}