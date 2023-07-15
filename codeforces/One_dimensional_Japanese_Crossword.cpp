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
  v(int) ans;
  int n, count = 0;
  string str;
  cin >> n >> str;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == 'B')
      count++;
    else if (str[i] == 'W' && count > 0)
    {
      ans.pb(count);
      count = 0;
    }
  }
  if (count > 0)
    ans.pb(count);
  cout << sz(ans) << "\n";
  for (int i = 0; i < sz(ans); i++)
    cout << ans[i] << " ";
}