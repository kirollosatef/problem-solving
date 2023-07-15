// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int x[4], ans = 0;
//   cin >> x[0] >> x[1] >> x[2] >> x[3];
//   for (int i = 0; i < 4; i++)
//     for (int j = 0; j < 4; j++)
//       if (x[i] == x[j] && i != j)
//         x[j] = -1;
//   for (int i = 0; i < 4; i++)
//     if (x[i] == -1)
//       ans++;
//   cout << ans ;
// }
/**
**By:kero_Atef
**Date:2021/06/01-21:52
**/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int a, b, c, d, ans = 0;
//   cin >> a >> b >> c >> d;
//   if (c == d)
//     ans++;
//   if (b == c || b == d)
//     ans++;
//   if (a == b || a == c || a == d)
//     ans++;
//   cout << ans ;
//   return 0;
// }
/**
**By:kero_Atef
**Date:2021/06/01-22:00
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x[4], ans = 0;
  cin >> x[0] >> x[1] >> x[2] >> x[3];
  sort(x, x + 4);
  for (int i = 0; i < 3; i++)
    if (x[i] == x[i + 1])
      ans++;
  cout << ans ;
}