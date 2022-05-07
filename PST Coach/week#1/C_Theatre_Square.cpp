#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long x, y, a;
  cin >> x >> y >> a;
  cout << ((x + a - 1) / a) * ((y + a - 1) / a);
}