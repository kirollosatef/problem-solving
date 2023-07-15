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
  int total, n, maxx = 0;
  cin >> total >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    maxx = max(maxx, x);
  }
  cout << total << " " << maxx << "\n";
  cout << total % maxx << "\n";
  cout << total / maxx << "\n";
  cout << (total % maxx > 0) ? ((total / maxx) + 1) : (total / maxx);
}
