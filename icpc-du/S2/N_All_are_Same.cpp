#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(s, n, i) for (int i = s; i < n; i++)
#define rlp(s, n, i) for (int i = s; i >= n; i--)
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    v(int) arr(n);
    cinarr(n, arr);
    sort(all(arr));
    if (arr[0] == arr[n - 1])
    {
      cout << -1 << endl;
      continue;
    }
    int ans = 0;
    lp(1, n, i)
        ans = __gcd(ans, arr[i] - arr[0]);
    cout << ans << endl;
  }
}
