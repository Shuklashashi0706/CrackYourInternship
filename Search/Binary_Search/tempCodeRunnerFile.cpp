#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
   int search(vector<int> &nums, int target)
   {
      int low = 0;
      int high = nums.size() - 1;

      while (low <= high)
      {
         int mid = high + (low - high) / 2;

         if (nums[mid] == target)
         {
            return mid;
         }

         if (nums[mid] >= nums[0])
         {
            if (target < nums[mid] && target >= nums[0])
            {
               high = mid - 1;
            }
            else
            {
               low = mid + 1;
            }
         }
         else
         {
            if (target <= nums[nums.size() - 1] && target > nums[mid])
            {
               low = mid + 1;
            }
            else
            {
               high = mid - 1;
            }
         }
      }

      return -1; // Return -1 if target is not found
   }
};

int main()
{
   class Solution obj;
   vector<int> nums({4,5,6,7,1,2})
   int index = obj.search(nums,2)
   cout<<"Index:"<<index<<"\n";
   return 0;
}