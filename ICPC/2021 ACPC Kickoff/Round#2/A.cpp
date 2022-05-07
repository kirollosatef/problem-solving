#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ifstream cin("alimagde.in");
  int t;
  cin >> t;
  while (t--)
  {
    int x, y = 1, count = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
      i += y;
      y++;
      count++;
    }
    cout << x - count << endl;
  }
}