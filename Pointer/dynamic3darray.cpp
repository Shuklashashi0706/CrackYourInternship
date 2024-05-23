#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int ***ptr = new int **[x];
    for (int i = 0; i < x; i++)
    {
        ptr[i] = new int *[y];
        for (int j = 0; j < y; j++)
        {
            ptr[i][j] = new int[z];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }

    // Outputting values from the 3D array
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << ptr[i][j][k] << "\t";
            }
            cout << endl; // Newline for better readability
        }
        cout << endl; // Newline for better readability
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
    return 0;
}