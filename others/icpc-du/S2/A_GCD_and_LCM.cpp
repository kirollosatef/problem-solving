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
ll GCD(ll a, ll b)
{
  if (a == 0)
    return b;
  return GCD(b % a, a);
}
int main()
{
  o_a;
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, m;
    cin >> n >> m;
    ll ans = GCD(n, m);
    cout << ans;
    cout << " " << (n * m) / ans << endl;
  }
}
