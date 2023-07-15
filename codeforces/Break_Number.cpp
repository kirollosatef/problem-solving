#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
ll numDiv(ll n)
{
  ll c = 0;
  while (n != 0)
  {
    if (n % 2 != 0)
      break;
    c++;
    n /= 2;
  }
  return c;
}
int main()
{
  o_a;
  ll t, mx = 0;
  cin >> t;
  while (t--)
  {
    ll x;
    cin >> x;
    mx = max(mx, numDiv(x));
  }
  cout << mx;
}
