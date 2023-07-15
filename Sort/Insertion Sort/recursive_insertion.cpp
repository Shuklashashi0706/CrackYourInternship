#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function prototype
void insertion(int arr[],int i, int n);

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

    insertion(arr,0, n); // Call the insertion sort function

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

// Insertion sort function
void insertion(int arr[],int i, int n)
{
    if(i==n){
        return;
    }
    int j, temp;
        j = i; // Current element index
        while (j > 0 && arr[j - 1] > arr[j]) // Compare with the left element
        {

            // Swap the elements
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--; // Move to the left
        }
    insertion(arr,i+1,n);
}
