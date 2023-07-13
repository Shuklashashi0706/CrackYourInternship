#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void insertion(int arr[], int n);
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
    insertion(arr, n);
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
void insertion(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i <= n-1; i++)
    {
        j = i; // imp
        while (j > 0 && arr[j - 1] > arr[j])//comparison with left element
        {
            cout<<"runs"<<endl; //shows how many time swapping is done
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}