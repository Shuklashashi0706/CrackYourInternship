//bubble sort
#include <iostream>
#include <chrono> // Include the chrono library for time measurement

using namespace std;
using namespace std::chrono; // Use the chrono namespace

// Function prototype
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

  auto start = high_resolution_clock::now(); // Measure the start time

  bubble(arr, n); // Call the bubble sort function

  auto stop = high_resolution_clock::now(); // Measure the end time

  // Calculate the duration in milliseconds
  auto duration = duration_cast<milliseconds>(stop - start);

  // Print the sorted array
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }

  cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;

  cout << endl;
  return 0;
}

// Bubble sort function
void bubble(int arr[], int n)
{
  int didSwap, temp, i, j;
  for (i = 0; i < n - 1; i++)
  {
    didSwap = 0; // Initialize the flag for swapping

    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1; // Set the flag to indicate swapping occurred
      }
    }

    // Optimisation of the bubble sort algorithm
    // If no swapping occurred during the pass, the array is already sorted
    if (didSwap == 0)
    {
      break;
    }
  }
}
