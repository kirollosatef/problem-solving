#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a, b, c, d;
  double mi = 100000;
  cin >> a >> b;
  for (int i = 1; i <= a; i++)
  {
    cin >> c >> d;
    mi = min((b * c) / d, mi);
  }
  cout << setprecision(8) << fixed << mi;
}