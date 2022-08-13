#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
int main()
{
  o_a;
  read("plants.in");
  int n;
  cin >> n;
  int h[n], g[n];
  for (int i = 0; i < n; cin >> h[i], i++)
    ;
  for (int i = 0; i < n; cin >> g[i], i++)
    ;
  int ok = 0, c = 0;
  for (int i = 0; i < n; i++)
  {
    if (h[i] > h[i + 1] && g[i] <= g[i + 1])
    {
      cout << -1;
      return 0;
    }
  }
  while (!ok)
  {
    int test = 0;
    for (int i = 0; i < n; i++)
    {
      if (h[i] <= h[i + 1])
      {
        test++;
      }
      else
      {
        break;
      }
    }
    if (test == n)
    {
      ok = 1;
      break;
    }
    for (int i = 0; i < n; i++)
      h[i] += g[i];
    c++;
  }
  if (ok)
    cout << c;
  return 0;
}
