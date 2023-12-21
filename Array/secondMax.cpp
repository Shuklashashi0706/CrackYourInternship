#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {14, 1, -3, 2, 12};
    int secondMax, ans;
    ans = INT_MIN;
    secondMax = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != ans)
        {
            secondMax = max(secondMax, arr[i]);
        }
    }
    // First Approach
    //  if(arr[0]>arr[1]){
    //      max=arr[0];
    //      secondMax = arr[1];
    //  }else{
    //      max=arr[1];
    //      secondMax=arr[0];
    //  }
    //  for(int i=2;i<5;i++){
    //      if(arr[i]>max){
    //          secondMax = max;
    //          max=arr[i];
    //      }
    //      else if(arr[i] > secondMax){
    //          secondMax = arr[i];
    //      }
    //      }
    cout << secondMax << endl;
    return 0;
}