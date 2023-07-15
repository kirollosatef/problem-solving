/**
**By:kero_Atef
**Date:2021/06/15-15:40
**/
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, t, k, d;
//   cin >> n >> t >> k >> d;
//   int mins = (n + k - 1) / k;
//   int x = t, y = d;
//   for (int i = 1; i < mins; i++)
//   {
//     if (x <= y)
//       x += t;
//     else
//       y += t;
//   }
//   (max(x, y) < mins * t) ? cout << "YES" : cout << "NO";
// }
#include <iostream>
using namespace std;
int main()
{
  int n, t, k, d, x;
  cin >> n >> t >> k >> d;
  x = (n + (k - 1)) / k;
  x *= t;
  cout << d + t << " " << x << endl;
  (d + t < x) ? cout << "YES" : cout << "NO";
  return 0;
}