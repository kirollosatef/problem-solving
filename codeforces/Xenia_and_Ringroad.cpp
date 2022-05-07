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
int main()
{
  o_a;
  ll n, m, ans = 0, pos = 1;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    ll num;
    cin >> num;
    if (num >= pos)
      ans += abs(num - pos);
    else
      ans += n - abs(num - pos);
    pos = num;
  }
  cout << ans << endl;
  return 0;
}