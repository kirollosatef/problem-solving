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
  string x, y, z = "";
  cin >> x >> y;
  for (int i = 0; i < sz(x); i++)
  {
    if (x[i] == y[i])
      z += '0';
    else
      z += '1';
  }
  cout << z;
}