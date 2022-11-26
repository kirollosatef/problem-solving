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
    int n;
    cin >> n;
    vec(int) arr(n);
    cinarr(n, arr);
    if (n == 1)
    {
      cout << 1 << " " << 1 << endl;
      continue;
    }
    int l = 0, r = 0, c = 0, ans = INT_MIN, xl = 0, xr = 0;
    while (l < n - 1)
    {
      r = l;
      int prifx[100000] = {0};
      while (r < n)
      {
        if (prifx[arr[r]] == 0)
        {
          c++;
          prifx[arr[r]] = 1;
        }
        if (((r + 1) - (l + 1) - c) >= ans)
        {
          ans = ((r + 1) - (l + 1) - c);
          xl = l + 1;
          xr = r + 1;
        }
        r++;
      }
      l++;
    }
    cout << xl << " " << xr << endl;
  }
}
