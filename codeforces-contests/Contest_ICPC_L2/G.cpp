// Given an array of nn integers, your task is to calculate the number of subarrays that have at most kk distinct values.
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
  // Given an array of nn integers, your task is to calculate the number of subarrays that have at most kk distinct values.
// Input
// The first input line has two integers nn and kk.
// The next line has nn integers`
// Output
// Print one integer: the number of subarrays.

  o_a;
  whilet
  {
    ll n, k;
    cin >> n >> k;
    vec(ll) arr(n);
    cinarr(n, arr);
    ll ans = 0;
    ll l = 0, r = 0;
    map<ll, ll> m;
    while (r < n)
    {
      m[arr[r]]++;
      while (sz(m) > k)
      {
        m[arr[l]]--;
        if (m[arr[l]] == 0)
          m.erase(arr[l]);
        l++;
      }
      ans += r - l + 1;
      r++;
    }
    cout << ans << endl;
  }
}
