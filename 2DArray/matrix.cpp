#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 39, 6, 7, 8, 9};
    // printing elements of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    // reverse each row of matrix
    for (int i = 0; i < 3; i++)
    {
        int l = 0;
        int r = 2;
        while (l < r)
        {
            swap(arr[i][l], arr[i][r]);
            l++;
            r--;
        }
    }
    cout<<" "<<endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    // print sum of diagonal sum
    //  int j=2,i=0;
    //  int sum=0;
    //  while(j>=0){
    //      sum+=arr[i][j];
    //      cout<<arr[i][j]<<"\t";
    //      i++;
    //      j--;
    //  }
    //  cout<<sum<<"\n";
    // print max sum of row
    //  int max = INT32_MIN;
    //  for (int i = 0; i < 3; i++)
    //  {
    //      int sum = 0;
    //      for (int j = 0; j < 3; j++)
    //      {
    //          sum += arr[i][j];
    //      }
    //      if (sum > max)
    //      {
    //          max = sum;
    //      }
    //  }
    //  cout<<"Max_sum"<<max<<"\n";
    //  accessing and modifiying value
    //  arr[2][1] = 4;

    // search for an element
    // int x = 1;
    // int found = false;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] == x)
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    // }
    // int *address = &arr[0][0];
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << *address << "\t";
    //     address++;
    // }
    // cout << "\n";
    return 0;
}
