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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    v(int) x(n), y(n);
    for (int i = 0; i < n; i++)
      cin >> x[i];
    for (int i = 0; i < n; i++)
      cin >> y[i];
    if (x == y)
    {
      cout << 0 << endl;
      continue;
    }
    int def = 0;
    for (int i = 0; i < n; i++)
      if (x[i] != y[i])
        def++;
    int zx = count(all(x), 0);
    int zy = count(all(y), 0);
    int ox = count(all(x), 1);
    int oy = count(all(y), 1);
    int defn = min(abs(zx - zy), abs(ox - oy));
    if (def == defn)
      cout << defn << endl;
    else
      cout << defn + 1 << endl;
  }
}
