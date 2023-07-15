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
#define endl '\n'
#define ins insert
#define F first
#define S second
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int n;
  cin >> n;
  int arr[n];
  cinarr(n, arr);
  ll ans = 1, flag = 0, c = 0, ok = 0;
  lp(0, n, i)
  {
    if (arr[i])
    {
      flag = 1;
      ok = 1;
      ans *= (c + 1);
      c = 0;
    }
    else if (arr[i] == 0 && flag)
      c++;
  }
  ok ? cout << ans << endl : cout << 0 << endl;
}
