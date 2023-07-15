#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int t;
  cin >> t;
  while (t--)
  {
    string x, y;
    int _1[26] = {0}, _2[26] = {0}, ok = 0;
    cin >> x >> y;
    for (int i = 0; i < sz(x); i++)
    {
      _1[x[i] - 'a']++;
      _2[y[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
      if (_1[i] > 0 && _2[i] > 0)
      {
        ok = 1;
        break;
      }
    (ok) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}