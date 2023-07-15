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
  ll n, m, k;
  cin >> n >> m >> k;
  ll ans = 0;
  if (n > 0 && m > 0 && k > 0)
    ans += min((min(n, m)), k);
  n -= ans;
  m -= ans;
  k -= ans;
  if (n > 1 && k > 0)
    ans += min((n / 2), k);
  cout << ans;
}
