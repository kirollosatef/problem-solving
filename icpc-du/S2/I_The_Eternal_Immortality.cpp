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
int main()
{
  o_a;
  ll a, b;
  cin >> a >> b;
  if (a == b)
    cout << 1;
  else if (b - a >= 5)
    cout << 0;
  else
  {
    ll ans = 1;
    while (b > a)
    {
      ll t = b % 10;
      ans *= t;
      ans %= 10;
      b--;
    }
    cout << ans;
  }
}
