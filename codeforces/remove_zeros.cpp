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
int remove(int x)
{
  string s = to_string(x);
  int n = sz(s);
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      s.erase(s.begin() + i);
      i--;
    }
  }
  int y = stoi(s);
  return y;
}
int main()
{
  o_a;
  int x, y;
  cin >> x >> y;
  int z = x + y;
  // cout << x << " + " << y << " = " << z << endl;
  x = remove(x);
  y = remove(y);
  z = remove(z);
  int zz = x + y;
  // cout << x << " + " << y << " = " << zz << endl;
  (z == zz) ? cout << "YES" : cout << "NO";
}