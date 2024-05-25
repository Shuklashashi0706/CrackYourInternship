#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfSquare(int n)
{
  if (n == 1)
    return 1;
  return (n * n) + sumOfSquare(n - 1);
}

int main()
{
  int n = 4;
  cout << sumOfSquare(n) << endl;
  return 0;
}