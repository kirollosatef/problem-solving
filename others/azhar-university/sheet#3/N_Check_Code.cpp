/**
**By:kero_Atef
**Date:2021/06/05-15:31
**/
#include <bits/stdc++.h>
using namespace std;
bool is(string xw, int x)
{
  for (int i = 0; i < x; i++)
    if (xw[i] < '0' || xw[i] > '9')
      return false;
  for (int i = x + 1; i < xw.size(); i++)
    if (xw[i] < '0' || xw[i] > '9')
      return false;
  return true;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long x, y;
  cin >> x >> y;
  string xw;
  cin >> xw;
  if (xw.size() == (x + y + 1) && xw[x] == '-' && is(xw, x) == 1)
    cout << "Yes";
  else
    cout << "No";
}