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
  int t;
  cin >> t;
  while (t--)
  {
    string str, ans = "Bad";
    cin >> str;
    for (int i = 0; i < sz(str) - 2; i++)
    {
      if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
      {
        ans = "Good";
        break;
      }
      if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
      {
        ans = "Good";
        break;
      }
    }
    cout << ans << endl;
  }
}