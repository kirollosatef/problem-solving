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
bool is(ll x)
{
  int tm = 2, ok = 0;
  for (ll i = 2; i <= x / 2; i++)
  {
    if (x % i == 0)
    {
      tm++;
      ok = 1;
    }
    if (tm > 3)
    {
      ok = 0;
      break;
    }
  }
  if (ok)
    return 1;
  else
    return 0;
}
int main()
{
  o_a;
  ll n, x;
  cin >> n;
  while (n--)
    cin >> x, (is(x)) ? cout << "YES\n" : cout << "NO\n";
}