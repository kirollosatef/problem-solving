#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string x, y;
  int ans = 0;
  cin >> x >> y;
  for (int i = 0; i < y.size(); i++)
    if (x[ans] == y[i])
      ans++;
  cout << ans + 1;
}