// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int y, m, x;
//   string arr[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
//   cin >> y >> m;
//   x = max(y, m);
//   cout << arr[6 - x];
// }
// #include <algorithm>
// #include <numeric>
/**
**By:kero_Atef
**Date:2021/06/03-15:52
**/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) // GCD (Greatest Common Divisor)
{
  if (a == 0)
    return b;
  if (b == 0)
    return a;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int y, m;
  cin >> y >> m;
  if (y >= m)
    cout << (6 - y + 1) / gcd(6, (6 - y + 1)) << '/' << 6 / gcd(6, (6 - y + 1));
  else
    cout << (6 - m + 1) / gcd((6 - m + 1), 6) << "/" << 6 / gcd((6 - m + 1), 6);
}