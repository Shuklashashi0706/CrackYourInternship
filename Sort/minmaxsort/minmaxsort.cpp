#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

int minmaxsort(vector<int> arr, int n)
{
   vector<int> tempArr(n);
   int size = n;
   int min, max;
   int left = 0;
   int right = n - 1;
   while (n > 0)
   {
      min = INT32_MAX;
      max = INT32_MIN;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] > max)
         {
            max = arr[i];
         }
         if (arr[i] < min)
         {
            min = arr[i];
         }
      }
      // cout<<"i"<<max<<min;
      tempArr[left] = min;
      tempArr[right] = max;
      left++;
      right--;
      int j = 0;
      n = n - 2;
      for (int i = 0; i < size; i++)
      {
         if (!(arr[i] == max || arr[i] == min))
         {
            arr[j] = arr[i];
            j++;
         }
         if (arr[i] == min)
            min = INT32_MAX;
         if (arr[i] == max)
            max = INT32_MIN;
      }

      cout << "\n";
   }
   for (int i : tempArr)
   {
      cout << i << "\t";
   }

   return 0;
}

int main()
{
   int n;
   cout << "Enter size:" << endl;
   cin >> n;
   vector<int> arr(n);
   cout << "Enter array elements:" << endl;
   for (int i = 0; i < n; i++)
   {
      int j;
      cin >> j;
      arr[i] = j;
   }
   
   minmaxsort(arr, n);
   return 0;
}