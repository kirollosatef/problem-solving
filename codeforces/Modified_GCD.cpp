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
  int x, y;
  cin >> x >> y;
  int t;
  cin >> t;
  while (t--)
  {
    int xx, yy;
    cin >> xx >> yy;
    int ans = -1;
    for (int i = xx; i <= yy; i++)
    {
      if (x % i == 0 && y % i == 0 && i > 1)
      {
        ans = i;
        break;
      }
    }
    cout << ans << endl;
  }
}
