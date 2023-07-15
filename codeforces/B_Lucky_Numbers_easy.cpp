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
vec(ll) v;
void gen(ll n, ll cnt4, ll cnt7)
{
  if (n > 1e10)
    return;
  if (cnt4 == cnt7)
    v.pb(n);
  gen(n * 10 + 4, cnt4 + 1, cnt7);
  gen(n * 10 + 7, cnt4, cnt7 + 1);
}
ll lower_bound(ll x)
{
  ll l = 0, r = sz(v) - 1;
  while (l <= r)
  {
    ll mid = (l + r) / 2;
    if (v[mid] == x)
      return v[mid];
    if (v[mid] > x)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return v[l];
}
int main()
{
  o_a;
  ll x;
  cin >> x;
  gen(4, 1, 0);
  gen(7, 0, 1);
  sort(all(v));
  cout << lower_bound(x) << endl;
}
