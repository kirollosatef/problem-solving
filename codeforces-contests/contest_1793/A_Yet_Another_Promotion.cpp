#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(i, srt, end, dir) \
  for (int i = srt; (dir ? (i < end) : (i > end)); (dir ? i++ : i--))
#define lpe(i, srt, end, dir) \
  for (int i = srt; (dir ? (i <= end) : (i >= end)); (dir ? i++ : i--))
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
  // day 1 = a coins for one kilo and if you pay for m kilos you get m+1 kilos
  // day 2 = b coins for one kilo
  whilet
  {
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    ll ans = 0;
    if (m > n)
    {
      ans = min(a, b) * n;
      n -= n;
    }
    if (m * a > (m + 1) * b && n)
    {
      ans = min(a, b) * n;
      n -= n;
    }
    if (m * a <= (m + 1) * b && n)
    {
      ll tmp = (n % (m + 1));
      ans += tmp * min(a, b);
      n -= tmp;
      n -= (n / (m + 1));
      ans += n * a;
    }
    cout << ans << endl;
  }
}
