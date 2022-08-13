#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
bool cas(pair<int, int> &a, pair<int, int> &b)
{
  return a.second > b.second;
}
vector<pair<int, int>> sortMap(map<int, int> &mp)
{
  vector<pair<int, int>> x;
  for (auto &it : mp)
  {
    x.pb(it);
  }
  sort(all(x), cas);
  return x;
}
int main()
{
  o_a;
  int m, n, ans = 0;
  cin >> m >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    mp[x] = max(mp[x], y);
  }
  vector<pair<int, int>> res = sortMap(mp);
  for (auto &it : res)
  {
    if (m <= it.first)
    {
      ans += m * it.second;
      break;
    }
    else
    {
      ans += it.first * it.second;
      m -= it.first;
    }
  }
  cout << ans;
}
