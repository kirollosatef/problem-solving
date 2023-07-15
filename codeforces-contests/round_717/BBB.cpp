// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, y;
//   cin >> x >> y;
//   x = x ^ y; // ? it's XOR operation
//   cout << x;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
  {
    int n, xr = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      xr ^= arr[i];
    }
    int p = 0;
    bool ok = 0;
    for (int i = 0; i < n && !ok; i++)
    {
      p ^= arr[i];
      int x = 0;
      for (int j = n - 1; j > i; j--)
      {
        x ^= arr[j];
        if (x == p && (xr == p || xr == 0))
        {
          ok = 1;
          break;
        }
      }
    }
    (ok) ? cout << "YES\n" : cout << "NO\n";
  }
}