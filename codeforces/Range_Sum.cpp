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
ll sumNu(ll n)
{
  ll ans = (n * (n + 1)) / 2;
  return ans;
}
int main()
{
  o_a;
  ll t;
  cin >> t;
  while (t--)
  {
    ll L;
    ll R;
    cin >> L >> R;
    ll sum = sumNu(R) - sumNu(L - 1);
    cout << sum << endl;
  }
}
