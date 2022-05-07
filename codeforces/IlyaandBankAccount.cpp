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
  if (n < 0)
  {
    n = abs(n);
    int last = n % 10;
    n -= n % 10;
    n /= 10;
    int l_last = n % 10;
    n -= n % 10;
    n /= 10;
    if (n != 0)
      (last < l_last) ? cout << -1 * n << last : cout << -1 * n << l_last;
    else
      (last < l_last) ? cout << -1 * last : cout << -1 * l_last;
  }
  else
    cout << n;
}