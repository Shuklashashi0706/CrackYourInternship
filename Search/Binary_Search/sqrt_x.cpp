// finding the squareroot of x
#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter value of x:" << endl;
  cin >> x;
  int low = 1;
  int high = x;
  int ans;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if ((mid * mid) == x)
    {
      ans = mid;
      break;
    }
    else if ((mid * mid) < x)
    {
      ans = mid;
      low = mid + 1;
    }
    else 
    {
      high = mid - 1;
    }
  }
  cout << "Ans: " << ans << endl;
  return 0;
}