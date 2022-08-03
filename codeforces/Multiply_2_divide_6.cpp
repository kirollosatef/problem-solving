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
  int t;
  cin >> t;
  while (t--)
  {
    int n, c = 0;
    cin >> n;
    while (n % 3 == 0)
    {
      if (n % 6 == 0)
        n /= 6;
      else
        n = n * 2;
      c++;
    }
    if (n != 1)
      c = -1;
    cout << c << "\n";
  }
}
