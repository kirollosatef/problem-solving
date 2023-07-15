#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int x, y, z, mn = 1e9;
  cin >> x >> y >> z;
  mn = min(mn, (abs(y - x) + abs(y - z)));
  mn = min(mn, (abs(x - y) + abs(x - z)));
  mn = min(mn, (abs(z - x) + abs(z - y)));
  cout << mn << endl;
}