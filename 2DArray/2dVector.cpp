#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row = 4;
    int col = 4;
    int init = 4;
    vector<vector<int>> matrix(row, vector<int>(col, init));
    cout << matrix.size() << endl;
    cout << matrix[0].size() << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
