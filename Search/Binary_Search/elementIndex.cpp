// Find the index of element in array even if it there or not
#include <iostream>
using namespace std;
int main()
{
    int n = 10, key;
    int arr[n] = {1, 2, 3, 5, 6, 7, 8, 9, 10, 12};
    cout << "Enter key:" << endl;
    cin >> key;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
        else if (key < arr[i])
        {
            index = i;
            break;
        }
    }
    cout << index << endl;
    return 0;
}