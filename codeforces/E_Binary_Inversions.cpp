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
ll slv(vec(ll) & v, ll c)
{
  ll ans = 0;
  for (int i = 0; i < sz(v); i++)
  {
    if (v[i] == 0)
      c--;
    else
      ans += c;
  }
  return ans;
}
int main()
{
  o_a;
  whilet
  {
    ll n;
    cin >> n;
    vec(ll) v(n), v1, v2;
    ll cntz = 0, fst = -1, lst = -1;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      cntz += (v[i] == 0);
      if (v[i] == 0 and fst == -1)
        fst = i;
      if (v[i] == 1)
        lst = i;
    }
    v1 = v;
    v2 = v;
    if (fst != -1)
      v1[fst] = 1;
    if (lst != -1)
      v2[lst] = 0;
    cout << max({slv(v, cntz), slv(v1, cntz - (fst != -1)), slv(v2, cntz + (lst != -1))}) << endl;
  }
}
