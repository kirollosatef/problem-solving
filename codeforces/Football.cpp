#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  vi ss;
  vs strs;
  int n, ans = 0, dx = 0;
  cin >> n;
  while (n--)
  {
    string x;
    cin >> x;
    int ok = 0, indx = 0;
    for (int i = 0; i < sz(strs); i++)
      if (x == strs[i])
      {
        ok = 1;
        indx = i;
        break;
      }
    if (!ok)
    {
      strs.pb(x);
      ss.pb(1);
    }
    else
      ss[indx]++;
  }
  for (int i = 0; i < sz(ss); i++)
    if (ans < ss[i])
    {
      ans = ss[i];
      dx = i;
    }
  cout << strs[dx];
}
// int main()
// {
//   int n, i, maxi = 0;
//   cin >> n;
//   string s[n], ans;
//   for (i = 0; i < n; i++)
//     cin >> s[i];
//   for (i = 0; i < n; i++)
//   {
//     if (count(s, s + n, s[i]) > maxi)
//     {
//       maxi = count(s, s + n, s[i]);
//       ans = s[i];
//     }
//   }
//   cout << ans;
// }
// int main()
// {
//   int n, a = 1, b = 0;
//   cin >> n;
//   n--;
//   string x, y, z;
//   cin >> x;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> z;
//     if (z == x)
//       a++;
//     else
//     {
//       y = z;
//       b++;
//     }
//   }
//   (a > b) ? cout << x : cout << y;
//   return 0;
// }