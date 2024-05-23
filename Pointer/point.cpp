#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void count(int *i, int *j)
{
    i = j;
    *i = 4;
}
int main()
{
    int i = 0, j = 1;
    count(&i, &j);
    cout << i << "\t" << j << endl;
    return 0;
}