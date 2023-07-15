#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, count = 1, max = 1;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
      count = 1;
      for (int j = i + 1; j < n; j++)
      {
        if (nums[j] - nums[i] <= 1)
        {
          count++;
          if (max < count)
            max = count;
        }
        else
        {
          break;
        }
      }
    }
    cout << max << endl;
  }
}
