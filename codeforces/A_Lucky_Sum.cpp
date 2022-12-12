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
void gen(ll n)
{
  if (n > 1e10)
    return;
  v.pb(n);
  gen(n * 10 + 4);
  gen(n * 10 + 7);
}
ll next(ll n)
{
  ll i = 0;
  while (v[i] < n)
    i++;
  return v[i];
}
int main()
{
  o_a;
  gen(4);
  gen(7);
  sort(all(v));
  ll l, r, sum = 0;
  cin >> l >> r;
  while (l <= r)
  {
    ll val = next(l);
    sum += val * (min(val, r) - l + 1);
    l = val + 1;
  }
  cout << sum << endl;
}
