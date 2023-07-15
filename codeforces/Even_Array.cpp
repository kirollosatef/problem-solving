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
    int n, ans = -1;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x % 2 == 0 && i % 2 != 0)
        even++;
      else if (x % 2 == 1 && i % 2 != 1)
        odd++;
    }
    if (even == 0 && odd == 0)
      ans = 0;
    else if (even != odd)
      ans = -1;
    else
      ans = even;
    cout << ans << endl;
  }
}
