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
  // stands in line of n people
  // no less than a people standing in front of him
  // no more than b people standing behind him
  int n, a, b;
  cin >> n >> a >> b;
  cout << min(n - a, b + 1);
}
