#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t; // ?  1 + 3 + 5 + ... + n(odd) =
  while (t--)
  {
    long long x, y, sum = 0;
    cin >> x >> y;
    for (int i = min(x, y) + 1; i < max(x, y); i++)
      if (i % 2)
        sum += i;
    cout << sum << endl;
  }
}