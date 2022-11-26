// https://codeforces.com/contest/1742/submission/182561217
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
  whilet
  {
    ll n, q;
    cin >> n >> q;
    v(ll) arr(n);
    vector<pair<ll, ll>> que;
    cinarr(n, arr);
    for (int i = 0; i < q; i++)
    {
      ll x;
      cin >> x;
      que.emplace_back(x, i);
    }
    sort(que.begin(), que.end());
    ll pt1 = 0, pt2 = 0, sum = 0;
    v(ll) ans(q);
    while (pt1 < n and pt2 < q)
    {
      if (arr[pt1] <= que[pt2].F)
      {
        sum += arr[pt1];
        pt1++;
      }
      else
      {
        ans[que[pt2].S] = sum;
        pt2++;
      }
    }
    for (int i = pt2; i < q; i++)
      ans[que[i].S] = sum;
    for (int i = 0; i < q; i++)
      cout << ans[i] << " ";
    cout << endl;
  }
}
