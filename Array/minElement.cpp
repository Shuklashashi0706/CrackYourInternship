//Finding min and max element
//Removing min element
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {23,45,4,342,3};
    int min = INT_MAX;
    int max= INT_MIN;
    int index=0;
    //finding minimum
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    // finding maximum
     for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;

    for(int i=index;i<4;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<4;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}