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
  int h, m, s;
  cin >> h >> m >> s;
  string aa;
  cin >> aa;
  if (aa == "PM")
    h += 12;
  h = abs(12 - h);
  cout << h * 3600 + m * 60 + s;
}
