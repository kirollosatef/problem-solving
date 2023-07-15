#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k, r, ans = 0;
  cin >> k >> r;
  while (++ans)
    if ((k * ans) % 10 == 0 || (k * ans) % 10 == r)
    {
      cout << ans;
      break;
    }
}