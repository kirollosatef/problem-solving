#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
// todo: method 1
void prem(v(int) nums, v(v(int)) & ans, v(int) & prefix)
{
  if (sz(nums) == 0)
  {
    ans.pb(prefix);
    return;
  }
  for (int i = 0; i < sz(nums); i++)
  {
    v(int) tmp = prefix;
    tmp.pb(nums[i]);
    v(int) tmp2 = nums;
    tmp2.erase(tmp2.begin() + i);
    prem(tmp2, ans, tmp);
  }
}
// todo: method 2
v(v(int)) prem2(v(int) num)
{
}
int main()
{
  o_a;
}