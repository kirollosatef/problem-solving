#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define read(x) ifstream cin(x)
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  read("equal.in");
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    (x == y || x == z || y == z) ? cout << "YES\n" : cout << "NO\n";
  }
}
