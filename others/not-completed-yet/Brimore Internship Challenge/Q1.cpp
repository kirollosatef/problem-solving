#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
class Solution
{
public:
  bool canCross(vi &stones)
  {
    int n = sz(stones);
    vector<vi> dp(n, vi(2003, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
      int cur = stones[i];
      for (int j = i - 1; j >= 0; j--)
      {
        int jump = cur - stones[j];
        if (jump > 2000)
          break;
        dp[i][jump] = (dp[j][jump] || dp[j][jump + 1] || dp[j][jump - 1]);
        if (i == n - 1 && dp[i][jump])
          return true;
      }
    }
    return false;
  }
};
int main()
{
  o_a;
}