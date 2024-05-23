#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    // creating 2d array using dynamic memory
    int **ptr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        ptr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ptr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
    return 0;
}