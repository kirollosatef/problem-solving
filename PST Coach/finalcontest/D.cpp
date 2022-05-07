#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int main()
{
  o_a;
  int n;
  cin >> n;
  int min = 0, in = 0;
  for (int i = 1; i <= n; i++)
  {
    int x, y;
    cin >> x >> y;
    in += (y - x);
    min = max(min, in);
  }
  cout << min << endl;
}