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
    map<string, int> mp;
    string s, ans = "";
    cin >> s;
    string sup = s.substr(0, 2);
    mp[sup]++;
    for (int i = 1; i < n; i++)
    {
      string t = s.substr(i, 2);
      if (mp[t] != 0)
      {
        if ((t == sup && mp[t] > 1) || (t != sup))
        {
          ans = "YES";
          break;
        }
      }
      sup = t;
      mp[t]++;
    }
    if (ans == "")
      ans = "NO";
    cout << ans << endl;
  }
}
