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
  int s1, s2, x1, x2;
  cin >> s1 >> s2 >> x1 >> x2;
  ll ans = (1 ^ (int)(pow(2, s1))) + (2 ^ (int)(pow(2, s2)));
  cout << ans;
}