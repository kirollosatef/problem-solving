#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
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
    while (n % 2 == 0)
      n /= 2;
    (n == 1) ? cout << "NO\n" : cout << "YES\n";
  }
}
