#include <bits/stdc++.h>
using namespace std;
int t, n, a[512];

int main()
{
  cin >> t;
  while (t--)
  {
    cin >> n;
    int minval = INT_MAX, maxval = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      minval = min(minval, a[i]);
      maxval = max(maxval, a[i]);
    }
    int ans = maxval - minval;
    for (int b = 0; b < 10; b++)
    {
      int p = -1, q = -1;
      for (int i = 0; i < n; i++)
      {
        if (((a[i] >> b) & 1) == 1 && p == -1)
        {
          p = a[i];
        }
        if (((a[i] >> b) & 1) == 0 && q == -1)
        {
          q = a[i];
        }
      }
      if (p != -1 && q != -1)
      {
        ans = max(ans, max(p, q) - min(p, q));
      }
    }
    cout << ans << endl;
  }
  return 0;
}
