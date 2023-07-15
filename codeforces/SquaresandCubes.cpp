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
void solve()
{
  int x;
  cin >> x;
  cout << (int)sqrt(x) + (int)cbrt(x) - (int)(sqrt(cbrt(x)));
}
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}