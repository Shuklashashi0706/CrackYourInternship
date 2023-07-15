#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function prototypes
void quickSort(vector<int> &array, int low, int high);
int partition(vector<int> &array, int low, int high);

int main()
{
    int size, data, i, low, high;
    vector<int> array;

    // Input size of the array
    cout << "Enter size: ";
    cin >> size;

    // Input elements of the array
    cout << "Enter elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> data;
        array.push_back(data);
    }

    low = 0;
    high = size - 1;

    // Measure the start time
    auto start = high_resolution_clock::now();

    // Call the quickSort function
    quickSort(array, low, high);

    // Measure the end time
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Print the sorted array
    for (i = 0; i < size; i++)
    {
        cout << array.at(i) << "\t";
    }

    // Print the execution time
    cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
    cout << endl;

    return 0;
}

// QuickSort function
void quickSort(vector<int> &array, int low, int high)
{
    int pIndex;
    if (low < high) // Base case: when there is more than one element in the array
    {
        pIndex = partition(array, low, high);
        quickSort(array, low, pIndex - 1);  // Recursively sort the left subarray
        quickSort(array, pIndex + 1, high); // Recursively sort the right subarray
    }
}

// Partition function
int partition(vector<int> &array, int low, int high)
{
    int pivot, i, j, temp;
    pivot = array[low];
    i = low;
    j = high;

    while (i < j)
    {
        // Find the first greater element
        while (i <= high - 1 && array[i] <= pivot)
        {
            i++;
        }

        // Find the first lower element
        while (j >= low + 1 && array[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            // Swap the elements
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    // Swap the pivot with the element at index j
    temp = array[low];
    array[low] = array[j];
    array[j] = temp;

    return j; // Return the pivot index
}
