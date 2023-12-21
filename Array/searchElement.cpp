#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3,2,1,5,4};
    int key,index=-1;
    cin>>key;
    for(int i=0;i<5;i++){
        if(key == arr[i]){
            index = i+1;
            break;
        }
    }
    cout<<key <<" found at index "<<index <<endl;
    return 0;
}