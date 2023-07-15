#include <bits/stdc++.h>
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
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
ll fact(ll n)
{
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}
int main()
{
  o_a;
  whilet
  {
    ll n;
    cin >> n;
    // ll ans = 0;
    // lpe(i, n - 1, 1, 0)
    // {
    //   if ((fact(i) + fact(i - 1)) % n == 0)
    //   {
    //     ans = i;
    //     break;
    //   }
    // }
    cout << n - 1 << endl;
  }
}
