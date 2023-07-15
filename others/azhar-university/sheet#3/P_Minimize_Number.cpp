#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int aaa(int x)
{
  if (x % 2 == 1 || x == 0)
    return 0 + aaa(x);
  else
    return 1 + aaa(x / 2);
}
int main()
{
  // int n, ans = 1e9;
  // cin >> n;
  // for (int i = 0; i < n; i++)
  // {
  //   long long x;
  //   cin >> x;
  //   if (x % 2)
  //   {
  //     cout << ans;
  //     return 0;
  //   }
  //   else
  //     ans = min(ans, (int)log2(x));
  // }
  // cout << ans;
  cout << aaa(2) << endl;
}