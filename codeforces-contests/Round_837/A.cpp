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
  whilet
  {
    ll n;
    cin >> n;
    ll arr[n];
    cinarr(n, arr);
    ll min = INT_MAX, max = INT_MIN;
    ll cntmax = 0, cntmin = 0;
    lp(0, n, i)
    {
      if (arr[i] > max)
      {
        max = arr[i];
        cntmax = 1;
      }
      else if (arr[i] == max)
        cntmax++;
      if (arr[i] < min)
      {
        min = arr[i];
        cntmin = 1;
      }
      else if (arr[i] == min)
        cntmin++;
    }
    if (cntmax == n || cntmin == n)
    {
      cout << n * (n - 1) << endl;
      continue;
    }
    ll ans = (cntmax * cntmin * 2);
    cout << ans << endl;
  }
}
