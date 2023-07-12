// i am using the recursion technique to sort the elements by selecting the minimum
// element in the array and then replacing it with the first element of the array and
// then again repeat above step by calling function for increased index
#include <iostream>
#include <chrono> // Include the chrono library for time measurement
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void selection(int arr[], int n, int i); // Function prototype for selection sort
void swap(int &a, int &b);               // Function prototype for swapping elements

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
    selection(arr, n, 0); // Call the selection sort function
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

// Function to perform selection sort using recursion
void selection(int arr[], int n, int i)
{
    // Base condition: if i is greater than or equal to (n-1), the array is sorted
    if (i >= (n - 1))
    {
        return;
    }
    else
    {
        int min = i; // Assume the current index as the minimum
        // Finding the index of the minimum element in the unsorted portion of the array
        for (int k = i + 1; k < n; k++)
        {
            if (arr[k] < arr[min])
            {
                min = k;
            }
        }
        // Swap the minimum element with the current element
        swap(arr[i], arr[min]);
        // Recursively call the selection function for the next index
        selection(arr, n, i + 1);
    }
}

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
