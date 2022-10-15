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
bool prime(ll n)
{
  for (int i = 2; i * i <= n; i++)
    if (!(n % i))
      return 0;
  return 1;
}
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    ll x, y;
    cin >> x;
    y = sqrt(x);
    (y * y == x && prime(y) && x != 1) ? cout << "YES\n" : cout << "NO\n";
  }
}
