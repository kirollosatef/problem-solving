#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(s, n, i) for (int i = s; i < n; i++)
#define lpe(s, n, i) for (int i = s; i <= n; i++)
#define rlp(s, n, i) for (int i = s; i >= n; i--)
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  ll n, l, r, x;
  cin >> n >> l >> r >> x;
  vec(ll) v(n);
  cinarr(n, v);
  ll ans = 0;
  for (int msk = 0; msk < (1ll << n); msk++)
  {
    ll sum = 0, mx = INT_MIN, mn = INT_MAX, cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (msk & (1 << i))
      {
        cnt++;
        sum += v[i];
        mx = max(v[i], mx);
        mn = min(v[i], mn);
      }
    }
    if (sum >= l && sum <= r && (mx - mn) >= x && cnt > 1)
      ans++;
  }
  cout << ans << endl;
}
