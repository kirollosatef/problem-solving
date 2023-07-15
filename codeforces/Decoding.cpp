#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define v(s) vector<s>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int n;
  string str, ans;
  cin >> n >> str;
  if (sz(str) % 2 == 0)
  {
    ans.pb(str[0]);
    ans.pb(str[1]);
    str.erase(0, 2);
  }
  else
  {
    ans.pb(str[0]);
    str.erase(0, 1);
  }
  for (int i = 0; i < str.length(); i += 2)
  {
    ans.insert(ans.begin(), str[i]);
    ans.pb(str[i + 1]);
  }
  cout << ans << endl;
}