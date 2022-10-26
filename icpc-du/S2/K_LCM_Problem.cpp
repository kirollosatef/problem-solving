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
void Case()
{
  int l, r;
  cin >> l >> r;
  (l * 2 > r) ? cout << -1 << " " << -1 : cout << l << " " << l * 2;
  cout << endl;
}
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    Case();
  }
}
