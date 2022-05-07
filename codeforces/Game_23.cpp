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
  int ans = -1;
  if (m % n == 0)
  {
    ans = 0;
    int d = m / n;
    while (d % 2 == 0)
    {
      d /= 2;
      ans++;
    }
    while (d % 3 == 0)
    {
      d /= 3;
      ans++;
    }
    if (d != 1)
      ans = -1;
  }
  cout << ans << endl;
}