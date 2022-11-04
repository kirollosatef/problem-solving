#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int averageValue(vector<int> &nums)
  {
    int c = 0, sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
      {
        c++;
        sum += nums[i];
      }
      return sum / c;
    }
  }
};
