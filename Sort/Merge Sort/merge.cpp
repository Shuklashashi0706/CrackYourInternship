#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void mergeSort(vector<int> &vec, int low, int high);
void merge(vector<int> &vec, int low, int mid, int high);

int main()
{
    // Create a vector to hold the input data
    vector<int> array;

    // Get the size of the input
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    // Read the input elements into the vector
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        int data;
        cin >> data;
        array.push_back(data);
    }

    // Perform merge sort on the vector
    int low = 0;
    int high = array.size() - 1;
    mergeSort(array, low, high);

    // Display the sorted array
    cout << "The sorted array is:" << endl;
    for (int i = low; i <= high; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;

    return 0;
}

// Function to perform merge sort on a vector
void mergeSort(vector<int> &vec, int low, int high)
{
    // Base case: if the vector has only one element or is empty, return
    if (low >= high)
    {
        return;
    }

    // Divide the vector into two halves and recursively sort them
    int mid = (low + high) / 2;
    mergeSort(vec, low, mid);
    mergeSort(vec, mid + 1, high);

    // Merge the two sorted halves
    merge(vec, low, mid, high);
}

// Function to merge two sorted subarrays of a vector
void merge(vector<int> &vec, int low, int mid, int high)
{
    // Create a temporary vector to store the merged elements
    vector<int> temp;

    // Initialize the indices for the two subarrays
    int left = low;
    int right = mid + 1;

    // Compare the elements from both subarrays and merge them into the temporary vector
    while (left <= mid && right <= high)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }

    // Copy any remaining elements from the left subarray
    while (left <= mid)
    {
        temp.push_back(vec[left]);
        left++;
    }

    // Copy any remaining elements from the right subarray
    while (right <= high)
    {
        temp.push_back(vec[right]);
        right++;
    }

    // Copy the merged elements from the temporary vector back to the original vector
    for (int i = low; i <= high; i++)
    {
        vec[i] = temp[i - low]; // Here, i-low simulates the relative indices for the original vector
    }
}
