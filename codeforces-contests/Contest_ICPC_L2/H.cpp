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
// given
int main()
{
  o_a;
  whilet
  {
    ll n, k;
    cin >> n >> k;
    vec(ll) arr(n);
    cinarr(n, arr);
    ll GCD = arr[0], mxGCD = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      GCD = __gcd(mxGCD, arr[i]);
      sum += arr[i];
      if (sum >= k)
      {
        mxGCD = max(mxGCD, GCD);
        sum = 0;
      }
    }
    cout << mxGCD << endl;
  }
}
