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
  int mn = INT_MAX;
  int n, k, c = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    mn = min(mn, x);
    c++;
    if (c == k || i == n - 1)
    {
      cout << mn << " ";
      mn = INT_MAX;
      c = 0;
    }
  }
}
