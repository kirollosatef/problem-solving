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
  float x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  float dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  cout << fixed << setprecision(18) << dist << endl;
}
