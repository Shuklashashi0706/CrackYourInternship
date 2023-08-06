#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    // Insertion into the max-heap
    // Time complexity: O(log N), where N is the number of elements in the heap.
    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;
        while (index > 1)
        {
            int parent = (index / 2);
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // Deletion from the max-heap
    // Time complexity: O(log N), where N is the number of elements in the heap.
    void delet()
    {
        if (size == 0)
        {
            return;
        }

        // Step:1 swap parent node with last node
        swap(arr[1], arr[size]);
        // Step:2 delete last node
        size--;
        // Step:3 compare parent node with its child and swap
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = (2 * i) + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    // Print the elements of the max-heap
    // Time complexity: O(N), where N is the number of elements in the heap.
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Heapify function to maintain the max-heap property
// Time complexity: O(log N), where N is the number of elements in the heap.
void heapify(int arr[], int size, int index)
{
    int largest = index;
    int left = 2 * index;
    int right = (2 * index) + 1;
    if (left <= size && arr[index] < arr[left])
    {
        largest = left;
    }
    if (right <= size && arr[index] < arr[right])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}

// Heap sort function to sort an array using max-heap
// Time complexity: O(N log N), where N is the number of elements in the array.
void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // Step-1:swap last node with root node
        swap(arr[1], arr[size]);
        size--;
        // Step-2:heapify the new root node
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.delet();
    h.print();
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // heap creation
    for (int i = (n / 2); i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // printing the heap array
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // heap sorting
    heapSort(arr, n);

    cout << "Print sorted array:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // using priority queue here
    // max-heap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(6);
    pq.push(2);
    pq.push(8);
    cout << "Size:" << pq.size() << endl;
    int size = pq.size();
    for (int i = 0; i < size; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //min-heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(1);
    minheap.push(5);
    minheap.push(6);
    minheap.push(2);
    minheap.push(8);
    cout << "Size:" << minheap.size() << endl;
    int size1 = minheap.size();
    for (int i = 0; i < size1; i++)
    {
        cout << minheap.top() << " ";
        minheap.pop();
    }
    cout << endl;
    return 0;
}
