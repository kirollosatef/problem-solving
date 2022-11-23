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
  // fixed sliding window: find the maximum sum of a subarray of size m
  int n, m;
  cin >> n >> m;
  v(int) arr(n);
  cinarr(n, arr);
  ll sum = 0, ans = INT_MIN;
  // sum of the first m elements
  for (int i = 0; i < m; i++)
    sum += arr[i];
  int l = 0, r = m;
  cout << "SUM BEFOR: " << sum << endl;
  while (r < n)
  {
    ans = max(ans, sum); // update the answer
    sum -= arr[l++]; // remove the leftmost element
    sum += arr[r++]; // add the rightmost element
  cout << "SUM: " << sum << endl;
  }
  cout << ans << endl;
}
