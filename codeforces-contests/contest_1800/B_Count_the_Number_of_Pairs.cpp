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
  whilet
  {
    int n, k, cnt = 0;
    cin >> n >> k;
    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
      mp[s[i]]++;
    for (int i = 0; i < 26; i++)
    {
      char l = 'a' + i, r = 'A' + i;
      int mx = max(mp[l], mp[r]);
      int mn = min(mp[l], mp[r]);
      int rem = mx - mn;
      cnt += mn;
      cnt += min(k, rem / 2);
      k -= min(k, rem / 2);
    }
    cout << cnt << endl;
  }
}
