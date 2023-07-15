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
  int t;
  cin >> t;
  while (t--)
  {
    int l, n;
    cin >> l >> n;
    vec(ll) v(n);
    cinarr(n, v);
    int ok = 0;
    for (int m = 0; m < (1ll << n); m++)
    {
      ll ans = 0;
      for (int i = 0; i < n; i++)
      {
        if (m & (1 << i))
        {
          ans += v[i];
        }
        if (ans == l)
        {
          ok = 1;
          break;
        }
      }
    }
    (ok) ? YES : NO;
  }
}
