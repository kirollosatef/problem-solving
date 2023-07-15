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
void solve()
{
  int x;
  cin >> x;
  vec(ll) v(x);
  cinarr(x, v);
  // possible == pow(2 , n) - 1
  // pow(2 , n) == 1 << n
  ll n = v.size();
  vec(vec(ll)) ans;
  for (int msk = 0; msk < (1ll << n); msk++)
  {
    vector<ll> sub;
    for (int i = 0; i < n; i++)
    {
      if (msk & (1 << i))
      {
        sub.pb(v[i]);
      }
    }
    ans.pb(sub);
  }
  sort(all(ans));
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }
}
int main()
{
  o_a;
  solve();
}
