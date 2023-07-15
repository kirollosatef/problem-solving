#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  double a, b, d;
  cin >> a >> b >> d;
  a = a + ((b / 100) * a) + ((d / 100) * a);
  cout << round(a);
}