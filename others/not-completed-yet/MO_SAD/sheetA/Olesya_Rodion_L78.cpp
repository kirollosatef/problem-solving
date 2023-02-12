#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x == 0 || y == 0)
    cout << -1;
  else
    cout << (long long)pow(10, x - 1) * y;
}
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//   int x;
//   string y;
//   cin >> x >> y;
//   string ans = "";
//   if (x == 0 || y == "0" || (y == "10" && x < 2))
//     cout << -1;
//   else
//   {
//     if (y == "10")
//     {
//       y = "1";
//       x--;
//       while (x--)
//         ans += y;
//       ans += "0";
//     }
//     else
//     {
//       while (x--)
//         ans += y;
//     }
//     cout << ans << endl;
//   }
// }