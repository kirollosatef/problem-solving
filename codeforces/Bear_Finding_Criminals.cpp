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
  int n, a;
  cin >> n >> a;
  a--;
  bool arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  int l = a - 1, r = a + 1, ans = 0;
  if (l < 0 || r > (n - 1))
  {
    for (int i = 0; i < n; i++)
      ans += arr[i];
    cout << ans;
    return 0;
  }
  if (arr[a] == 1)
    ans++;
  while (l >= 0 && r <= (n - 1))
  {
    if (arr[l] && arr[r])
    {
      ans += 2;
      l--;
      r++;
    }
    else
    {
      l--;
      r++;
    }
  }
  if (l >= 0)
  {
    for (int i = l; i >= 0; i--)
      ans += arr[i];
  }
  if (r <= (n - 1))
  {
    for (int i = r; i < n; i++)
      ans += arr[i];
  }
  cout << ans;
}
