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
  int w[n];
  for (int i = 0; i < n; cin >> w[i], i++)
    ;
  int ans = 0;
  while (m--)
  {
    int a, b;
    cin >> a >> b;
    ans += min(w[a], w[b]);
  }
  cout << ans;
  return 0;
}
