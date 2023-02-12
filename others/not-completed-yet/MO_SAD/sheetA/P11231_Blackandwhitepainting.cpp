#include <bits/stdc++.h>
using namespace std;
#define pd push_back
int main()
{
  int n, m, c;
  while (cin >> n >> m >> c && n != 0)
  {
    int rem = (c == 1) ? 1 : 0;
    cout << ((n - 7) * (m - 7) + rem) / 2 << "\n";
  }
  return 0;
}
// void faster()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
// }
// int main()
// {
//   faster();
//   int ok = 1;
//   while (ok)
//   {
//     long long row, col, wb, ans = 0;
//     cin >> row >> col >> wb;
//     if (row == 0 || col == 0)
//       break;
//     if (row == 8 || col == 8)
//       (wb) ? cout << 1 << endl : cout << 0 << endl;
//     else
//     {
//       row -= 7, col -= 7;
//       ans += (col) * (row) / 2;
//       (ans % 2 && !wb) ? ans++ : ans;
//       cout << ans << endl;
//     }
//   }
// }