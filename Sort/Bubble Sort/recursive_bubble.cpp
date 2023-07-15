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
    if (n == 1)
    {
        return;
    }
    didSwap = 0;
    for (j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }
    if (didSwap == 0)
    {
        return;
    }
    bubble(arr, n - 1); // here,recursion is used for iteration instead of using loop
}
