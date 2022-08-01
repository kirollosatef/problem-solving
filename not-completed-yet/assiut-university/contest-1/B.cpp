#include <bits/stdc++.h>
using namespace std;
int solve(int &x)
{
  return pow(2, x - 1);
}
int main()
{
  int x;
  cin >> x;
  int ans = solve(x);
  cout << ans << endl;
}
