#include <bits/stdc++.h>
using namespace std;
void crash()
{
  cin.tie(0);
  cin.sync_with_stdio(0);
}
int main()
{
  crash();
  int n, ans = 0;
  string x;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    if (x[i] - '0' == 0)
      ans += -1;
    else
      ans += 1;
  }
  cout << abs(ans);
}