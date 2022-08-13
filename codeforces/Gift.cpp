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
  int n, m;
  cin >> n >> m;
  int nm = pow(m, n);
  string str = "abcdef";
  cout << nm << endl;
  for (int i = 0; i < nm; i++)
  {
    string ans = "";
    for (int j = n - 1; j >= 0; j--)
    {
      int x = (int)((i / pow(m, j))) % m;
      ans += str[x];
    }
    cout << ans << endl;
  }
}
