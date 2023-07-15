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
  map<char, string> mp;
  mp['0'] = mp['1'] = "";
  mp['2'] = "2";
  mp['3'] = "3";
  mp['4'] = "223";
  mp['5'] = "5";
  mp['6'] = "35";
  mp['7'] = "7";
  mp['8'] = "2227";
  mp['9'] = "2337";
  int n;
  string str, ans = "";
  cin >> n >> str;
  for (int i = 0; i < n; i++)
    ans += mp[str[i]];
  sort(all(ans));
  reverse(all(ans));
  cout << ans;
  return 0;
}
