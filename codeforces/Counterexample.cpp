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
  ll l, r;
  cin >> l >> r;
  if (r - l < 2)
  {
    cout << -1;
    return 0;
  }

  if (l % 2 == 0)
  {
    cout << l << " " << l + 1 << " " << l + 2;
    return 0;
  }
  if (r - l > 2)
  {
    cout << l + 1 << " " << l + 2 << " " << l + 3;
    return 0;
  }
  cout << -1;
}
// ll a, b;
// vector<ll> n;
// cin >> a >> b;
// for (ll i = a; i < b; i++)
// {
//   for (ll j = i + 1; j < b; j++)
//   {
//     if (__gcd(i, j) == 1)
//     {
//       cout << i << " " << j << endl;
//       n.pb(i);
//       n.pb(j);
//       break;
//     }
//   }
//   if (sz(n) == 2)
//     break;
// }
// if (sz(n) == 0)
// {
//   cout << -1;
//   return 0;
// }
// for (ll i = n[1] + 1; i <= b; i++)
// {
//   if (__gcd(i, n[1]) == 1 && __gcd(i, n[0]) != 1)
//     n.pb(i);
//   if (sz(n) == 3)
//   {
//     cout << n[0] << " " << n[1] << " " << n[2];
//     return 0;
//   }
// }
// cout << -1;