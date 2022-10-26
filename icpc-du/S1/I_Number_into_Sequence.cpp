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
    ll n;
    cin >> n;
    ll temp = n;
    ll mx = 0, flag = 0;
    for (ll i = 2; i * i <= n; i++)
    {
      ll c = 0;
      while (n % i == 0)
      {
        c++;
        n /= i;
      }
      if (mx <= c)
      {
        flag = i;
        mx = c;
      }
    }
    if (mx == 0 || flag == 0 || (mx == 1 && flag * flag != n))
    {
      cout << 1 << endl;
      cout << temp << endl;
      continue;
    }
    cout << mx << endl;
    for (ll i = 0; i < mx - 1; i++)
      cout << flag << " ";
    ll f = 0;
    if (mx > 1)
      f = temp / pow(flag, (mx - 1));
    else
      f = temp / flag;
    cout << f << endl;
  }
}
