#include <bits/stdc++.h>
#define v(type) vector<type>
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
// #define mp make_pair
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
map<ll, ll> mp;
int main()
{
  o_a;
  ll n, k;
  cin >> n >> k;
  v(ll) arr;
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arr.pb(x);
    mp[x] = i;
  }
  for (ll i = 0; i < n; i++)
  {
    if (mp[k - arr[i]] && mp[k - arr[i]] != i)
    {
      cout << i + 1 << " " << mp[k - arr[i]] + 1 << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
