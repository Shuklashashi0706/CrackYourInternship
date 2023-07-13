#include <iostream>
using namespace std;
void bubble(int arr[],int n);
int main()
{
  int n, i, j;
  cout << "Enter array size:" << endl;
  cin >> n;
  int arr[n]; // Declare an array of size n
  cout << "Enter elements:" << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i]; // Input array elements
  }
  bubble(arr,n);
   for(i=0;i<n;i++){
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  return 0;
}
void bubble(int arr[],int n){
  int temp,i,j;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
 
}