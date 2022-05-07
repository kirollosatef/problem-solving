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
int hmln(int x)
{
  int ans = 0;
  while (x)
  {
    if (x % 10 == 4 || x % 10 == 7)
      ans++;
    x /= 10;
  }
  return ans;
}
int main()
{
  o_a;
  int n, k;
  cin >> n >> k;
  int ans = n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (hmln(x) > k)
      ans--;
  }
  cout << ans;
}