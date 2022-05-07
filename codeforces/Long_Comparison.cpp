#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define all(str) str.begin(), str.end()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  ll n;
  cin >> n;
  while (n--)
  {
    ll x, xx, y, yy;
    cin >> x >> xx >> y >> yy;
    // x*= round(pow(10, xx));
    // y*= round(pow(10, yy));
    for (int i = 0; i < xx; i++)
      x *= 10;
    for (int i = 0; i < yy; i++)
      y *= 10;
    if (x > y)
      cout << ">\n";
    else if (x < y)
      cout << "<\n";
    else
      cout << "=\n";
  }
}