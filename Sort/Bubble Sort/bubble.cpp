#include <iostream>
#include <chrono> // Include the chrono library for time measurement

using namespace std;
using namespace std::chrono; // Use the chrono namespace

void bubble(int arr[], int n);
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
  auto start = high_resolution_clock::now();
  bubble(arr, n);
  auto stop = high_resolution_clock::now();
  // Calculate the duration in milliseconds
  auto duration = duration_cast<milliseconds>(stop - start);
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;

  cout << endl;
  return 0;
}
void bubble(int arr[], int n)
{
  int didSwap,temp, i, j;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap=1;
      }
    }
    //optimisation of problem
    if(didSwap == 0){
      break;
    }
    cout<<"runs"<<endl;
  }
}