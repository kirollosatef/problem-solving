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
  int a, b, c, mx = 0;
  cin >> a >> b >> c;
  mx = max(mx, (a + b + c));
  mx = max(mx, (a * b * c));
  mx = max(mx, (a + b * c));
  mx = max(mx, (a * b + c));
  mx = max(mx, ((a + b) * c));
  mx = max(mx, (a * (b + c)));
  cout << mx;
}