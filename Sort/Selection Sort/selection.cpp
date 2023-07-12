#include <iostream>
#include <chrono> // Include the chrono library for time measurement
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void selection(int arr[], int n);
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
    // Start measuring the execution time
    auto start = high_resolution_clock::now();
    selection(arr, n); // Call the selection sort function
    // Stop measuring the execution time
    auto stop = high_resolution_clock::now();
     // Calculate the duration in milliseconds
    auto duration = duration_cast<milliseconds>(stop - start);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t"; // Print sorted array elements
    }
    cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
    return 0;
}
void selection(int arr[], int n)
{
    // looping through array from 0 to n-2 as last element will be already sorted
    int i, j;
    for (i = 0; i <= n - 2; i++)
    {
        int min = i;
        // for finding min element
        for (j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        cout << arr[min] << endl;
        // swapping arr[min] with arr[j]
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
