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
  int a, b;
  cin >> a >> b;
  int p1 = 0, p2 = 0, d = 0;
  for (int i = 1; i <= 6; i++)
  {
    if (abs(a - i) < abs(b - i))
      p1++;
    else if (abs(a - i) > abs(b - i))
      p2++;
    else
      d++;
  }
  cout << p1 << " " << d << " " << p2 << endl;
}