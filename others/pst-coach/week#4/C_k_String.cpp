#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
int frq[26];
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int k, n = 0;
  string s, ans = "", err;
  cin >> k >> s;
  for (int i = 0; i < sz(s); i++)
    frq[s[i] - 'a']++;
  for (int i = 0; i < 26; i++)
    if (frq[i] > 0 && frq[i] % k != 0)
    {
      cout << -1;
      return 0;
    }
  for (int i = 0; i < 26; i++)
  {
    int ndx = 0;
    if (frq[i] > 0)
    {
      ndx = frq[i] / k;
      while (ndx--)
        ans += (i + 'a');
    }
  }
  err = ans;
  while (--k)
    ans += err;
  cout << ans << endl;
}